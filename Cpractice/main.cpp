#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    printf("Hello KNU!\n");
    printf("Hello SW!\n");
    int i, j, k, n = 0;

    printf(" 피라미드를 몇 층으로 쌓을지 정하시오. : ");
    scanf("%d", &n);

    printf("\n%d층 피라미드\n", n);

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