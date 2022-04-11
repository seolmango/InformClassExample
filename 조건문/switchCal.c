// switch 문을 이용한 산술 계산기

// switch 기본 사용법
/*
switch (expression)
{
case constant-expression :
  code;
  break;

  default:
  break;
}
*/

#include <stdio.h>

int main()
{
  int num1, num2;
  char oper;

  printf("계산식을 입력하세요 > ");
  scanf("%d %c %d", &num1, &oper, &num2);
  switch(oper) {
    // 꼭 ''로 감싸야 한다(""는 불가)
    case '+':
      printf("%d + %d = %d", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%d - %d = %d", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%d * %d = %d", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%d / %d = %d", num1, num2, num1 / num2);
      break;
    default:
    // 위의 case가 아닌 경우
      printf("지원하지 않는 연산자입니다.");
      break;
  }
  return 0;
}