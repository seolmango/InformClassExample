// 입력한 정수까지 총합을 구하는 프로그램

#include <stdio.h>

int main()
{
  int num;
  int sum = 0;
  printf("정수를 입력하세요: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++) {
    sum += i;
  }
  printf("1부터 %d까지의 총합은 %d입니다.", num, sum);
  return 0;
}