// printf 함수 사용법 및 기본적인 C의 코드 구조

#include <stdio.h> // 표준 입출력 헤더파일(standard input/output header file)을 불러온다

int main() // C에서 main함수는 프로그램이 실행 될때 자동으로 시작된다
{
  printf("Hello world!!"); // printf()함수는 출력하는 함수이다
  printf("\nIt's next line"); // \n 으로 줄바꿈을 할 수 있다
  printf("\n\"I'm talking to you\""); // "를 쓰려면 앞에 \를 붙히면 된다
  printf("\nsubject\tscore\tfeel"); // \t를 쓰면 탭을 할 수 있다
  printf("\nMath\t100\tgood"); // \n을 쓰면 줄바꿈을 할 수 있다

  return 0; // 프로그램이 종료되면 0을 반환한다(int:정수형이므로)
}