// if문을 사용한 학점 계산 프로그램

#include <stdio.h>

int main()
{
  int score;
  printf("점수를 입력하세요: ");
  scanf("%d", &score);

  if(score >= 90) {
    printf("A");
  }
  else if(score >= 80) {
    printf("B");
  }
  else if(score >= 70) {
    printf("C");
  }
  else if(score >= 60) {
    printf("D");
  }
  else {
    printf("F");
  }
  return 0;
}