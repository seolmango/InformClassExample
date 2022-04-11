// 반복문을 사용한 구구단 출력 코드 입니다.

#include <stdio.h>

int main()
{
  int a;
	printf("구구단 출력\n출력 단 입력 >> ");
	scanf_s("%d", &a);
	for (int i = 1; i < ((a > 10) ? a + 1 : 10); i++) {
		printf("%d * %d = %d\n",a, i, a * i);
	}
	return 0;
}