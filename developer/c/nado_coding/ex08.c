#include <stdio.h>

int main()
{
  // 문자열 끝에는 끝을 의미하는 null문자 \0이 포함되어야 한다.
  // char str[6] = "coding";   //[c][o][d][i][n][g][\0]
  // char str[7] = "coding"; //[c][o][d][i][n][g][\0]
  // printf("%s\n", str);
  char str[] = "coding";
  printf("%s\n", str);
  printf("%lu\n", sizeof(str));
}