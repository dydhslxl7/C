#include <stdio.h>

void main() {
    double a,b,c;

    printf("��ٸ����� ���̸� ���ϱ� ���� ����, �غ�, ���̸� �Է��Ͻÿ�.\n");
    printf("���� : ");
    scanf("%lf", &a);
    printf("�غ� : ");
    scanf("%lf", &b);
    printf("���� : ");
    scanf("%lf", &c);

    double d = ((a + b) * c) / 2;
    printf("����(%.lf), �غ�(%.lf), ����(%.lf)�� ������ \
    ��ٸ����� ������ %.3lf�Դϴ�.\n\n",
            a, b, c, d);
}