#include <stdio.h>

void swap(int* num1, int* num2)
{
    int num3;
    num3 = *num1;
    *num1 = *num2;
    *num2 = num3;

}

int main()
{
    int num1, num2;
    num1 = 100;
    num2 = 200;
    printf("num1 : %d, num2 : %d \n", num1, num2);

    swap(&num1, &num2);

    printf("num1 : %d, num2 : %d \n", num1, num2);

    return 0;
}

