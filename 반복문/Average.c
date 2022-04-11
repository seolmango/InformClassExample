// 여러개(알수없는 수)의 입력값의 평균 구하기

#include <stdio.h>

int main()
{
  float sum = 0;
	int input = 0,count = -1;
	printf("----------------------\n");
	printf("* 성적 평균 프로그램 *\n");
	printf("----------------------\n");
	printf("성적 입력 종료는 음수를\n입력하시오(ex. -1)\n");
	while (input >= 0) {
		sum += input;
		count++;
		printf("성적을 입력하세요 > ");
		scanf_s("%d", &input);
	}
	printf("성적의 평균은 %.3f입니다", sum / count);
	return 0;
}