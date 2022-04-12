// 가위바위보 프로그램
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int ComPick;
	int UserPick;
	// 가위 : 0,바위 : 1,보 :2 
	printf("무엇을 내실건가요?( 가위 : 0,바위 : 1,보 : 2) > ");
	scanf("%d", &UserPick);
	srand(time(NULL));
	ComPick = rand() % 3;
	if (UserPick < 0 || UserPick > 2)
	{
		printf("이상한 거 입력하지 마세요");
		return 0;
	}
	printf("플레이어 : %d, 컴퓨터 : %d", UserPick, ComPick);
	switch ((UserPick - ComPick + 3) % 3)
	{
	case 1:
		printf("플레이어 승");
		break;
	case 0:
		printf("비김");
		break;
	case 2:
		printf("플레이어 패배");
		break;
	}
	return 0;
}