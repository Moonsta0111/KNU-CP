#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    printf("Hello KNU!\n");
    printf("Hello SW!\n");
    int i, j, k, n = 0;

    printf(" �Ƕ�̵带 �� ������ ������ ���Ͻÿ�. : ");
    scanf("%d", &n);

    printf("\n%d�� �Ƕ�̵�\n", n);

    for (i = 0; i < n; i++)
    {
        for (j = i; j <= n - 1; j++)
        {
            printf(" ");
        }
        for (k = 0; k <= (i * 2); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}