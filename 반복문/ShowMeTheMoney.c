// 돈 계산 해보기(일시불 vs 복리)

#include <stdio.h>

int main()
{
  long long int sum = 0;
	long long int now = 1;
	int days = 1;
	while (days < 51) {
		printf("%d일날 현재 금액 > %lld원\n",days,now);
		days++;
		now *= 2;
		sum += now;
	}
	printf("\n\n\n==============\n");
	printf("50일 총합 > %lld원\n", sum);
	printf("==============\n\n\n");
	return 0;
}