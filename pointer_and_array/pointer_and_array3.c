/*
배열의 평균값 구하기

배열 요소를 참조할 때는 배열명에 정수 값을 더하는 포인터 표현을 사용하며, 평균은 소수점 이하 둘째 자리까지 출력
*/
#include <stdio.h>

int main(void) {
    double ary[] = {1.5, 20.1, 16.4, 2.3, 3.5};
    double average, sum = 0;
    double* p = ary;
    int i, length = sizeof(ary)/sizeof(ary[0]);
    for (i = 0; i < length; i++) {
        sum += *(p + i);
    }
    average = sum / length;
    printf("평균값 : %.2lf\n", average);
    return 0;
}