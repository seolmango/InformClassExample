// 유클리드 알고리즘

#include <stdio.h>

int main()
{
  int x, y;
	int r;
	printf("두 숫자를 입력해주세요 > ");
	scanf_s("%d %d", &x, &y);
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	printf("최대공약수는 %d입니다", x);
	return 0;
}