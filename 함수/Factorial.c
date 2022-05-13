#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int factorial();

int main()
{
	int a; 
	long long int result;
	printf("정수를 입력하세요 > ");
	scanf("%d", &a);
	result = factorial(a);
	printf("%d!의 값은 %lld입니다.", a,result);
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