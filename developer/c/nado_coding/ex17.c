// struct

#include <stdio.h>

struct GameInfo
{
  char *name;
  int year;
  int price;
  char *company;
  struct GameInfo *friendGame; // 연관 업체 게임
};

int main()
{
  // 구조체 사용
  struct GameInfo gameInfo1;
  gameInfo1.name = "나도게임";
  gameInfo1.year = 2017;
  gameInfo1.price = 5000;
  gameInfo1.company = "나도회사";

  // 구조체 출력
  printf("-- 게임 출시 정보 --\n");
  printf("   게임명   : %s\n", gameInfo1.name);
  printf("  발매년도  : %d\n", gameInfo1.year);
  printf("    가격    : %d\n", gameInfo1.price);
  printf("  제작사  : %s\n", gameInfo1.company);

  // 구조체를 배열처럼 초기화
  struct GameInfo gameInfo2 = {"너도 게임", 2022, 2000, "너도회사"};
  // 구조체 출력
  printf("-- 게임 출시 정보 --\n");
  printf("   게임명   : %s\n", gameInfo2.name);
  printf("  발매년도  : %d\n", gameInfo2.year);
  printf("    가격    : %d\n", gameInfo2.price);
  printf("  제작사  : %s\n", gameInfo2.company);

  // 구조체 배열
  struct GameInfo gameArray[2] = {
      {"나도 게임", 2017, 5000, "나도회사"},
      {"너도 게임", 2022, 2000, "너도회사"}};

  // 구조체 포인터
  struct GameInfo *gamePtr;
  gamePtr = &gameInfo1;
  // printf("\n\n   게임명   : %s\n", *(gamePtr).name);   // 이렇게 하면 *(gamePtr.name) 이런말이다
  printf("\n\n   게임명   : %s\n", (*gamePtr).name);
  printf("  발매년도  : %d\n", gamePtr->year);
  printf("    가격    : %d\n", gamePtr->price);
  printf("  제작사  : %s\n", gamePtr->company);

  // 연관 업체 게임 소개
  gameInfo1.friendGame = &gameInfo2;
  printf("\n\n   게임명   : %s\n", gameInfo1.friendGame->name);
  printf("  발매년도  : %d\n", gameInfo1.friendGame->year);
  printf("    가격    : %d\n", gameInfo1.friendGame->price);
  printf("  제작사  : %s\n", gameInfo1.friendGame->company);
}