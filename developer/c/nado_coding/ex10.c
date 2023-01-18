#include <stdio.h>

int main()
{
  //포인터
  int a = 1;
  int b = 2;
  int c = 3;

  printf("a 주소 : %d, 암호 : %d\n", &a, a);
  printf("b 주소 : %d, 암호 : %d\n", &b, b);
  printf("c 주소 : %d, 암호 : %d\n", &c, c);

  int *mission; // 포인터 변수
  // 미션 2 : 각 암호에 3을 곱해라
  mission = &a;
  *mission = *mission * 3;
  // spy
  // 미션맨이 바꾼 암호에서 2를 빼라
  int *spy = &a;
  *spy = *spy - 2;

  // 미션 1 : 아파트의 각 집에 방문하여 문에 적힌 암호 확인
  mission = &a;
  printf("mission맨이 방문하는 곳 주호 : %d, 암호 %d \n", mission, *mission);
  mission = &b;
  printf("mission맨이 방문하는 곳 주호 : %d, 암호 %d \n", mission, *mission);
  mission = &c;
  printf("mission맨이 방문하는 곳 주호 : %d, 암호 %d \n", mission, *mission);
}