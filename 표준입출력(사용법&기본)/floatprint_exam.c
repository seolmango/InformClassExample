// Float 형식을 출력할때 여러가지 설정들
// 소수점 자리수를 설정할 수 있다.

#include <stdio.h>

int main()
{
  int won = 0;
	float dollar = 0;
	printf("몇 원인지 입력해주세요");
	scanf("%f", &won);

	dollar = won * 0.00081;
	printf("입력하신 금액은 %.4f달러입니다", dollar);

	return 0;
}