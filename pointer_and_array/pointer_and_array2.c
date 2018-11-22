#include <stdio.h>
void line_up(double* max, double* mid, double *min);

int main(void) {
    double max, mid, min;
    printf("임의의 숫자 세 개를 입력하세요. : ");
    scanf("%lf %lf %lf", &max, &mid, &min);
    line_up(&max, &mid, &min);
    printf("큰 수부터 차례로 출력하면 : %lf %lf %lf\n", max, mid, min);
    return 0;
}


void line_up(double* max, double* mid, double *min) {
    double temp;
    if (*max < *mid) {
        temp = *max;
        *max = *mid;
        *mid = temp;
    } else if (*mid < *min) {
        temp = *mid;
        *mid = *min;
        *min = temp;
    }
    if (*max < *mid) {
        temp = *max;
        *max = *mid;
        *mid = temp;
    }
}