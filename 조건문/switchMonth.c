// switch문을 활용한 월별 일수 계산 프로그램

#include <stdio.h>

int main()
{
  int month;
  int day;
  printf("월을 입력하세요 > ");
  scanf("%d", &month);
  switch (month)
  {
    case 2:
			day = 28;
			break;
		case 4:
    // break를 적지 않으면 여러개의 case문을 처리할 수 있다.
		case 6:
		case 9:
		case 11:
			day = 30;
			break;
		default:
			day = 31;
			break;
  }
  printf("%d월의 일수는 %d일입니다.\n", month, day);
  return 0;
}