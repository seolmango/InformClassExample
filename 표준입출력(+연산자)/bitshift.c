#include <stdio.h>

int main()
{
	// 비트 시프트 연산을 하면서 놀아보세요
	// & : and(둘다 1이여야 1)
	// | : or(둘중에 하나라도 1이면 1)
	// ^ : xor(둘이 서로 다르면 1)
	// ~ : not(0이면 1로, 1이면 0으로)
	// << : 비트 값을 왼쪽으로 밀기(곱하기 2)
	// >> : 비트 값을 오른쪽으로 밀기(나누기 2)
	// printInTwo 함수는 입력된 unsigned int를 이진법으로 변환하여 메모리에 저장된 것처럼 출력해주는 함수입니다
	unsigned int n = 534543;
	unsigned int a = 3546876843;
	printf("n\t");
	printInTwo(n);
	printf("~n\t");
	printInTwo(~n);
	printf("\na\t");
	printInTwo(a);
	printf("~a\t");
	printInTwo(~a);
	printf("\na & n\t");
	printInTwo(a & n);
	printf("a | n\t");
	printInTwo(a | n);
	printf("a ^ n\t");
	printInTwo(a ^ n);
	return 0;
}

int printInTwo(num)
{
	// 메모리 값을 출력해주는(2진법으로 출력해주는 함수)
	unsigned int i = 1;
	i = i << 31;
	for (int j = 31; j >= 0; j--) {
		if (num >= i) {
			printf("1");
			num -= i;
		}
		else {
			printf("0");
		}
		if (j % 8 == 0) {
			printf(" ");
		};
		i = i >> 1;
	}
	printf("\n");
	return 0;
}