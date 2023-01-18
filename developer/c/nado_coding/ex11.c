#include <stdio.h>

int main()
{
  int arr[3] = {5, 10, 15};
  int *ptr = arr;
  for (int i = 0; i < 3; i++)
  {
    printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
  }
  for (int i = 0; i < 3; i++)
  {
    printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
  }
  ptr[0] = 100;
  ptr[1] = 200;
  ptr[2] = 300;
  for (int i = 0; i < 3; i++)
  {
    // printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
    printf("배열 arr[%d]의 값 : %d\n", i, *(arr + i));
  }
  for (int i = 0; i < 3; i++)
  {
    printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
  }
  // *(arr + i) = arr[i] 똑같은 표현
  // arr = arr배열의 첫번째 값의 주소와 동일 == &arr[0]
  printf("arr 자체의 값 : %d\n", arr);
  printf("arr[0]의 값 : %d\n", &arr[0]);
  printf("arr자체의 값이 가지는 주소의 실제 값 %d\n", *arr);
  printf("arr[0]의 실제 값 : %d\n", *&arr[0]);
}