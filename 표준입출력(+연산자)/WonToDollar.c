// 원을 달러로 바꾸어주는 프로그램(Float이용)

#include <stdio.h>

int main()
{
  int won = 0;
	float dollar = 0;
	printf("몇 원인지 입력해주세요 > ");
	scanf("%f", &won);

	dollar = won * 0.00081;
	printf("입력하신 금액은 %f달러입니다", dollar);
	
	return 0;
}