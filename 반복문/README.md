# 반복문

드디어 컴퓨터에게 우리가 하기 귀찮은 반복되는 일을 시킬 수 있겠군요.

GOTO, while ,for 를 이용해서 우리의 몸을 편하게 해줍시다.

### 목록

1. [구구단 출력(이거 국룰임)](https://github.com/Seol7523/InformClassExample/blob/main/%EB%B0%98%EB%B3%B5%EB%AC%B8/99.c)

2. [여러개의 입력값 받기](https://github.com/Seol7523/InformClassExample/blob/main/%EB%B0%98%EB%B3%B5%EB%AC%B8/Average.c)

3. [별 피라미드 만들어보기](https://github.com/Seol7523/InformClassExample/blob/main/%EB%B0%98%EB%B3%B5%EB%AC%B8/CountingStar.c)

4. [투자왕 프로그램(일시불 vs 복리)](https://github.com/Seol7523/InformClassExample/blob/main/%EB%B0%98%EB%B3%B5%EB%AC%B8/ShowMeTheMoney.c)

5. [유클리드 호제법](https://github.com/Seol7523/InformClassExample/blob/main/%EB%B0%98%EB%B3%B5%EB%AC%B8/Uclide.c)

6. [총합을 구하는 프로그램](https://github.com/Seol7523/InformClassExample/blob/main/%EB%B0%98%EB%B3%B5%EB%AC%B8/totalNum.c)

### TMI

> 여긴 제 생각입니다. 뭔 소리지 싶으면 걍 무시하세요.

각각의 반복문은 어떤 상황에서 잘 쓰일까요? 한번 제 뇌피셜로 끄적여보겠습니다.

1. **GOTO** 
안써요. 예. 진짜로 안써요. 이걸 쓰다보면 어느새 이게 왜 돌아가는지조차 알 수 있는 어떠한 문자들의 집합이 여러분의 화면에 있을 겁니다.

2. **while**
몇번 실행될지 모를때 사용합니다. 사실 for문이 조금더 형식화된 형태라서 디버깅이 쉽습니다. 하지만 for문으로는 코드를 작성하기 어려운(조건이 복잡하거나 유동적인 경우) while이 가장 최선의 선택입니다.

3. **for**
실행될 횟수을 알고 있는 경우 사용합니다. 보통 형식화된 데이터를 다룰 때 많이 사용한것 같은데 이렇게 말하면 이해하기 어려우실 것 같으니 예시를 들게요.
어떤 엑셀 파일의 가로에는 학생들의 이름이 세로로는 그 학생의 점수들이 쭉 있을때 각각의 경우에 모두 평균을 구해야 한다고 가정해봅시다. 이때 과목 수와 학생 수를 알고 있다면 for문을 사용하는 것이 깔끔합니다. **for문은 뭔가 종료를 확실하게 보장해주는 느낌이라 신뢰성이 높게 느껴집니다.**

**결론 : GOTO만 쓰지 마세요**