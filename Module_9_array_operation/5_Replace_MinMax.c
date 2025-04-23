#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int m_val = arr[0];
  int m_idx = 0;
  int l_val = arr[0];
  int l_idx = 0;
  for (int i = 1; i < n; i++) {
    if (m_val < arr[i]) {
      m_val = arr[i];
      m_idx = i;
    } else if (l_val > arr[i]) {
      l_val = arr[i];
      l_idx = i;
    }
  }

  int temp = m_val;
  m_val = l_val;
  l_val = temp;

  arr[m_idx] = m_val;
  arr[l_idx] = l_val;

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
