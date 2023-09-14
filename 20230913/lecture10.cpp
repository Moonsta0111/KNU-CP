#include <stdio.h>

int main()
{
    int i,j;

    for (i = 2; i < 10; i++) {
        if (i == 5) continue;
        for (j = 1; j < 10; j += 1) {
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}