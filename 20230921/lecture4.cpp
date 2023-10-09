#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main() {
    
    double x = 0;
    double y = 0;

    int count = 1,full_square = 0;
    int i, j;
    double of_circle = 0;
    double circum = 0;
    srand(time(NULL));

    while (count <= 1000000000) {
        x = (double)rand() / (double)RAND_MAX;
        y = (double)rand() / (double)RAND_MAX;

        double length;
        length = sqrt(pow(x, 2) + pow(y, 2));

        if (length <= 1)
            of_circle++;

        circum = 4 * (of_circle / (float)count);

        if (count % 10000000 == 0) {
            printf("%3d%% 진행.. 원주율 : %lf  ", count / 10000000, circum);
            full_square = (count * 0.00000002);
            for (i = 0; i < full_square; i++) {
                printf("■ ");
            }
            for (j = 0; j < (20 - full_square); j++) {
                printf("□ ");
            }
            printf("\n");
        }
        count++;
    }

    printf("원주율 : %lf\n", circum);
}