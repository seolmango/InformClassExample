#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 정의되어있는 함수 미리 명시
void print_star(int);

int main()
{
	int a;
	scanf("%d", &a);
	print_star(a);
	printf("\n광주과학고등학교!\n");
	print_star(a);
	printf("\n정보과학!\n");
	print_star(a);
}

void print_star(int x) // void는 반환값이 필요없는 함수에 사용
{
	for (int i = 0; i < x; i++)
	{
		printf("*");
	}
}