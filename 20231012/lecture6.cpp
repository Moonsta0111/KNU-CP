#include <stdio.h>

void swap(int* num1, int* num2)
{
    int num3;
    num3 = *num1;
    *num1 = *num2;
    *num2 = num3;

}

void sort(int ary[])
{
    int min;
    for (int i = 0; i < 5; i++) {

        min = i;
        for (int j = (i+1); j < 5; j++) {
            if (ary[j] < ary[min]) {
                min = j;
            }
        }

        if (i != min) {
            swap(&ary[i], &ary[min]);
        }
    }
}

int main()
{
    int ary[5] = { 3,5,1,4,2 };

    for (int i = 0; i < 5; i++) {
        printf("%d ", ary[i]);
    }
    printf("\n");

    sort(ary);

    for (int i = 0; i < 5; i++) {
        printf("%d ", ary[i]);
    }

    return 0;
}