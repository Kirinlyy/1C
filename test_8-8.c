#include <stdio.h>
int main()
{
  void inv(int x[], int n);
  int i, a[10] = {3, 7, 9, 11, 0, 6, 7, 5, 4, 2};
  printf("The oringal array:\n");
  for (i = 0; i < 10; i++)
    printf("%d", a[i]);
  printf("\n");
  inv(a, 10);
  printf("The array has been inverted:\n");
  for (i = 0; i < 10; i++)
    printf("%d", a[i]);
  printf("\n");
  return 0;
}

void inv(int x[], int n) // 形参x是数组名
{
  int temp, i, j, m = (n - 1) / 2;
  for (i = 0; i <= m; i++)
  {
    j = n - 1 - i;
    temp = x[i];
    x[i] = x[j];
    x[j] = temp;
  }
  return;
}