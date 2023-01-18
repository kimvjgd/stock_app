#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int num = rand() % 100 + 1;
  printf("숫자 : %d\n", num);

  int answer = 0;
  int chance = 5;
  while (chance > 0)
  {
    printf("남은 기회 %d 번 \n", chance--);
    printf("숫자를 맞혀보세요 (1~100) : ");
    scanf("%d", &answer);
    if (answer > num)
    {
      printf("DOWN");
    }
    else if (answer < num)
    {
      printf("UP");
    }
    else if (answer == num)
    {
      printf("congratulation~!!!");
      break;
    }
    else
    {
      printf("wrong answer");
    }
  }
}