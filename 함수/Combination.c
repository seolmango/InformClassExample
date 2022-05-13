#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int factorial(int);
long long int combination(int, int);

int main()
{
	int a,b;
	long long int result;
	printf("C(a,b): 두 정수 a,b를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	result = combination(a, b);
	printf("C(%d,%d)의 값은 %lld입니다.", a, b, result);
	return 0;
}

long long int factorial(int num)
{
	long int result = 1;
	for (int i = 1; i <= num; i++)
	{
		result *= i;
	}
	return result;
}

long long int combination(int a, int b)
{
	long long int result;
	result = (factorial(a) / (factorial(a - b) * factorial(b)));
	return result;
}