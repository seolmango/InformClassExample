# 표준 입출력 기본 코드들

표준 입출력(standard input/output 줄여서 stdio)를 이용하는 기본적인 방법을 알 수 있는 코드입니다.

### 목록

1. [기본적인 출력](https://github.com/Seol7523/InformClassExample/blob/main/%ED%91%9C%EC%A4%80%EC%9E%85%EC%B6%9C%EB%A0%A5(%EC%82%AC%EC%9A%A9%EB%B2%95%26%EA%B8%B0%EB%B3%B8)/printf_example.c)

2. [변수 출력](https://github.com/Seol7523/InformClassExample/blob/main/%ED%91%9C%EC%A4%80%EC%9E%85%EC%B6%9C%EB%A0%A5(%EC%82%AC%EC%9A%A9%EB%B2%95%26%EA%B8%B0%EB%B3%B8)/print_var.c)

3. [소수점 자릿수 출력 설정](https://github.com/Seol7523/InformClassExample/blob/main/%ED%91%9C%EC%A4%80%EC%9E%85%EC%B6%9C%EB%A0%A5(%EC%82%AC%EC%9A%A9%EB%B2%95%26%EA%B8%B0%EB%B3%B8)/floatprint_exam.c)

4. [값 입력받기](https://github.com/Seol7523/InformClassExample/blob/main/%ED%91%9C%EC%A4%80%EC%9E%85%EC%B6%9C%EB%A0%A5(%EC%82%AC%EC%9A%A9%EB%B2%95%26%EA%B8%B0%EB%B3%B8)/scanf_exam.c)

### 혹시 에러 나지 않으신가요?

Visual Studio 환경에서는 scanf함수를 사용하게 되면 컴파일 에러가 납니다.

#### 해결법

1. 솔루션 탐색기에서 자신의 프로젝트 명을 마우스 오른쪽 클릭 -> 속성에 들어갑니다

2. 구성 속성 -> C/C++ -> 전처리기 -> 전처리기 정의 입력란을 찾습니다

3. 원래 있던 글 뒤에 ;(구분자) 뒤에 _CRT_SECURE_NO_WARNINGS를 넣어주고 ; 까지 넣어줍니다

#### 이유

scanf는 입력 버퍼 오버플로우가 발생할 수 있어서(입력받는 값이 메모리에 다 담기지 못하고 넘칠 수도 있다.) 보안상의 이유로 VS에서는 에러를 발생시킵니다. 전처리기 설정을 바꾸시거나 scanf_s함수를 사용하시는 것도 좋은 대안입니다.
