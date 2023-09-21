#include<stdio.h>

int sum(double num1, double num2) {
    double sum_1;
    sum_1 = (num1 + num2);
    printf("%d + %d = %d", num1, num2, sum_1);
    return 0;
}

int sub(double num1, double num2) {
    double sub_1;
    sub_1 = num1 - num2;
    printf("%d - %d = %d", num1, num2, sub_1);
    return 0;
}

int mul(double num1, double num2) {
    double mul_1;
    mul_1 = num1 * num2;
    printf("%d + %d = %d", num1, num2, mul_1);

    return 0;
}

int div(double num1, double num2) {
    double div_1;
    div_1 = num1 / num2;
    printf("%d + %d = %d", num1, num2, div_1);

    return 0;
}

void calculator(int selector) {

    double num1, num2;

    printf("숫자를 1을 입력하시오 : ");
    scanf_s("%lf", &num1);

    printf("숫자 2를 입력하시오 : ");
    scanf_s("%lf", &num2);

    if (selector == 1) sum(num1, num2);
    else if (selector == 2) sub(num1, num2);
    else if (selector == 3) mul(num1, num2);
    else if (selector == 4) div(num1, num2);
}

int main() {
    int sel;

    printf("1. 더하기 2.빼기 3. 곱하기 4 나누기 : ");
    scanf_s("%d", &sel);

    calculator(sel);

    return 0;

}