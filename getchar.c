#include <stdio.h>

void main() {
    int a, b;

    printf("2���� �������� �Է��Ͻÿ� \n");
    printf("���� x : ");
    scanf("%d", &a);
    printf("���� y : ");
    scanf("%d", &b);
    int c = (a+b) / 2;
    printf("x(%d)�� y(%d)�� ��հ��� ��ȣ�� ������ ���� -%d�Դϴ�.\n\n\n",
            a, b, c);
}