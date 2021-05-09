#include <stdio.h>

void main() {
    int a, b;

    printf("2개의 정수값을 입력하시오 \n");
    printf("정수 x : ");
    scanf("%d", &a);
    printf("정수 y : ");
    scanf("%d", &b);
    int c = (a+b) / 2;
    printf("x(%d)와 y(%d)의 평균값에 부호를 반전한 겂은 -%d입니다.\n\n\n",
            a, b, c);
}