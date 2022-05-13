#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int input_int();
int add_int(int,int);

int main()
{
	int a, b, result;
	a = input_int();
	b = input_int();
	result = add_int(a, b);
	printf("%d", result);
	return 0;
}

int input_int()
{
	int a;
	printf("정수를 입력하세요 > ");
	scanf("%d", &a);
	return a;
}

int add_int(int a,int b)
{
	return a + b;
}