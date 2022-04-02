// printf 함수로 변수 출력해보기

#include <stdio.h> // 표준 입출력 헤더파일(standard input/output header file)을 불러온다

int main() // C에서 main함수는 프로그램이 실행 될때 자동으로 시작된다
{
  //정수형 변수는 아래와 같이 다양하게 만들 수 았다.
  int x;
  int y = 5;
  int a,b;
  int c = 1,d = 2;

  x = 3;
  a = 4;
  b = a + x;

  printf("%d + %d = %d",x,a,b); // %d는 정수형을 의미한다

  return 0; // 프로그램이 종료되면 0을 반환한다(int:정수형이므로)
}