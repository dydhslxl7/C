#include <stdio.h>

void main() {
    double a,b,c;

    printf("사다리꼴의 넓이를 구하기 위해 윗변, 밑변, 높이를 입력하시오.\n");
    printf("윗변 : ");
    scanf("%lf", &a);
    printf("밑변 : ");
    scanf("%lf", &b);
    printf("높이 : ");
    scanf("%lf", &c);

    double d = ((a + b) * c) / 2;
    printf("윗변(%.lf), 밑변(%.lf), 높이(%.lf)를 가지는 \
    사다리꼴의 면적은 %.3lf입니다.\n\n",
            a, b, c, d);
}