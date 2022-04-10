// if문을 사용한 홀수 짝수 구분해주는 프로그램

#include <stdio.h>

int main()
{
  int num;
  printf("정수를 입력하세요: ");
  scanf("%d", &num);

  if(num % 2 == 0) {
    printf("입력된 정수는 짝수 입니다.");
  }
  else {
    printf("입력된 정수는 홀수 입니다.");
  }
  return 0;
}