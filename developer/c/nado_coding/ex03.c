#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

  printf("난수 초기화 이전\n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", rand() % 10); // 런을 또 돌리면 같은 값이 나온다.
  }

  printf("난수 초기화 이후\n");
  srand(time(NULL)); // 난수 초기화
  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", rand() % 10); // 런을 또 돌리면 같은 값이 나온다.
  }

  return 0;
}