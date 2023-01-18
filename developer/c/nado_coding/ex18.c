#include <stdio.h>

struct GameInfo
{
  char *name;
  int year;
  int price;
  char *company;
  struct GameInfo *friendGame; // 연관 업체 게임
};

typedef struct Gmaeinforatmion
{
  char *name;
  int year;
  int price;
  char *company;
} GAME_INFO;

int main()
{
  typedef struct GameInfo 게임정보;
  게임정보 game1;
  game1.name = "한글 게임";
  game1.year = 2030;
  game1.price = 50000;
  game1.company = "삼성전자";
}