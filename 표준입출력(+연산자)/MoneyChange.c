// 거스름돈 계산해주는 프로그램

#include <stdio.h>

int main()
{
  int money;
  int price;
  int left;

  printf("물건 값 입력 > ");
  scanf("%d", &price);
  printf("내가 낸 돈 입력 > ");
  scanf("%d", &money);

  left = money - price;
  printf("\n오만원권 : %d장", left / 50000);
  left = left % 50000;
  printf("\n만원권 : %d장", left / 10000);
  left = left % 10000;
  printf("\n오천원권 : %d장", left / 5000);
  left = left % 5000;
  printf("\n천원권 : %d장", left / 1000);
  left = left % 1000;
  printf("\n오백원 : %d개", left / 500);
  left = left % 500;
  printf("\n백원 : %d개", left / 100);
  left = left % 100;
  printf("\n이러고도 남은 돈 : %d원", left);

  return 0;
}