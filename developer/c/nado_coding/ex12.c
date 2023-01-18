#include <stdio.h>

void swap(int a, int b);

int main()
{
  int a = 10;
  int b = 20;
  printf("Swap 함수 전 => a : %d, b : %d\n", a, b);
  swap(a, b);
  printf("Swap 함수 후 => a : %d, b : %d\n", a, b);
  return 0;
}

void swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
  printf("Swap 함수 내 => a : %d, b : %d\n", a, b);
}