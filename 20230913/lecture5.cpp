#include <stdio.h>

int main(void)
{
    int year, a;

    printf(" �������� �˰���� �⵵�� �Է��Ͻÿ�. : ");
    scanf_s("%d", &year);

    a = (year % 100 != 0) && (year % 400 == 0) && (year % 4 == 0);

    if (a)
        printf("�����Դϴ�.\n");
    else
        printf("������ �ƴմϴ�.\n");

    return 0;
}