// 중첩 for문을 사용한 별 피라미드 출력

#include <stdio.h>

int main()
{
  int n;
	printf("층 입력 > ");
	scanf("%d", &n);
	printf("높이 : %d\n", n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (int j = 1; j < (2 * n - 1) - 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
