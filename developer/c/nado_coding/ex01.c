#include <stdio.h>

int main()
{
  int one, two, three;
  printf("3개의 정수를 입력하세요");

  scanf("%d %d %d", &one, &two, &three);
  printf("첫번째 값 : %d\n", one);
  printf("두번째 값 : %d\n", two);
  printf("세번째 값 : %d\n", three);
}