#include <stdio.h>
void swap(double* a, double *b);
int main(void) {
    double a = 1.3;
    double b = 1.7;
    printf("바꾸기 전의 a, b의 값 : %.1lf, %.1lf\n", a, b);
    swap(&a, &b);
    printf("바꾼 후의 a, b의 값 : %.1lf %.1lf\n", a, b);
    return 0;
}

void swap(double* a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}