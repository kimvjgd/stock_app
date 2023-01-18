#include <stdio.h>

int main()
{
  int arr[10] = {1, 2};
  for (int i = 0; i < 10; i++)
  {
    printf("%d번째 : %d\n", i + 1, arr[i]);
  }
}