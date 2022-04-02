// scanf를 사용하여 값 입력받기 예제

#include <stdio.h>

int main()
{
  // 앞으로 변수를 선언할 때는 가독성을 위해서 하나씩 선언할 것임
  int x;
  int y;

  // scanf 를 사용하면 '버퍼오버플로우'라는 에러가 발생할 수 있기때문에 VS에서는 실행을 막는다.
  // 전처리기 설정에  _CRT_SECURE_NO_WARNINGS를 추가한다.
  scanf("%d %d",&x,&y); // 입력받기(입력을 받을 변수앞에는 꼭 &를 붙혀주어야한다.)

  printf("%d + %d = %d",x,y,x+y); // 더해서 출력하기

  return 0;
}