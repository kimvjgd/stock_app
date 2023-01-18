#include <stdio.h>

void changeArray(int *ptr);

// 배열일 때 arr2 -> 주소
int main()
{
  int arr2[3] = {10, 20, 30};
  changeArray(arr2);
  for (int i = 0; i < 3; i++)
  {
    printf("%d\n", arr2[i]);
  }
}

void changeArray(int *ptr)
{
  ptr[2] = 50;
}