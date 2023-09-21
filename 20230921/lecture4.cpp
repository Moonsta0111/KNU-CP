#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main() {
    
    double x = 0;
    double y = 0;

    int count = 0, circle = 0;
    double of_circle = 0;
    double circum = 0;
    srand(time(NULL));

    while (count < 1000000000) {
        x = (double)rand() / (double)RAND_MAX;
        y = (double)rand() / (double)RAND_MAX;

        double length;
        length = sqrt(pow(x, 2) + pow(y, 2));

        if (length <= 1)
            of_circle++;

        circum = 4 * (of_circle / (float)count);

        if (count % 10000000 == 0) {
            printf("%d%% 진행.. 원주율 : %lf\n", count / 10000000, circum);
        }
        count++;
    }

    printf("원주율 : %lf\n", circum);
}