// time 모듈을 사용한 타이머

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int min, second;
  printf("분 초 입력하기 > ");
  scanf("%d %d", &min, &second);
  for(int minCount = min; minCount == 0; minCount--){
    for(int seCount = (min == minCount) ? second : 59; seCount == 0; seCount--){
      system("cls");
      printf("%d분 %d초", minCount, seCount);
      Sleep(1000);
    }
  }
  system("cls");
  printf("%d분 %d조가 끝났어요!!", min, second);
  return 0;
}

