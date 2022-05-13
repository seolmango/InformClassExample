# 연습문제 - 1 답

> 아래의 답 중 1,2번은 같아야 정답, 그 이후 문제들은 그저 예시로 참고하시고 정확한 답은 직접 컴파일 해보시는 게 좋습니다.

## 1

```txt
3
4, 2
0, 4, 6
```

## 2

```txt
6
```

## 3

ㄱ

```c
j = 1; j < 2 * i; j++
```

ㄴ

```c
printf("%c", j+64);
```

## 4

ㄱ

```c
int i = 0; i <sub;i++
```

ㄴ

```c
sum += (float)grade;
```

ㄷ

```c
"성적의 평균은 %.02f입니다.", average
```

## 5

```c
#include<stdio.h>

int main(){
  int x, y;
  for (x = 1; x <= 9; x++) {
   for (y = 1; y <= 9; y++) {
    printf("%d*%d=%2d", y, x, x * y);
    if (y != 9)printf("_");
   }
   printf("\n");
  }
  return 0;
}
```

## 6

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  int i, j, n;
  printf("정수를 입력하세요: ");
  scanf("%d", &n);
  for (i = 1; i <= 6; i++) {
   for (j = 1; j <= 6; j++) {
    if (i + j == n) {
     printf("%d %d\n",i,j);
    }
    else if (i* j == n) {
     printf("%d %d\n", i, j);
    }
   }
  }
  return 0;
}
```

## 7

ㄱ

```c
(com + 3 - user) % 3
```

ㄴ

```c
case 0:
 printf("Draw!!");
 break;
case 1:
 printf("Lose!!");
 break;
case 2:
 printf("Win!!");
 break;
```

## 8

```c
#include <stdio.h>
int main() {
 float h, w;

 printf("키를 입력하세요 : ");
 scanf("%f", &h);
 printf("몸무게를 입력하세요 : ");
 scanf("%f", &w);

 printf("당신의 BMI 측정값은 %.02f 입니다.",w / (h * h));
 return 0;
}
```

## 9

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
 int n;
 int sum = 0;
 int counter = 1;
 printf("정수를 입력하세요 : ");
 scanf("%d", &n);

 while (counter < n) {
  counter *= 10;
 }
 while (counter > 99) {
  counter /= 10;
  printf("%d + ",n/counter);
  sum += n / counter;
  n -= counter * (n / counter);
 }
 counter = 1;
 printf("%d = %d", n / counter, sum + (n / counter));
 return 0;
}
```
