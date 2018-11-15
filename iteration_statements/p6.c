/*
do ~ while문을 이용하여 반복적으로 실수가 아닌 양수를 입력 받아 총합을 구하는 프로그램을 작성하시오.

0이나 실수가 아닌 음수를 입력하면 반복을 종료하고 입력 받은 모든 양수의 합이 출력
처음부터 0이나 음수가 입력되면 반복을 끝내고 0을 출력

실행결과
    양수입력 : 5
    양수입력 : 10
    양수입력 : 15
    양수입력 : 1
    누적된 값 : 30

hint : break문을 만나면 반복문은 종료됨
*/
#include <stdio.h>

int main(void) {
    int num, sum = 0;
    do {
        printf("양수입력 : ");
        scanf("%d", &num);
        if (num <= 0) {
            break;
        }
        sum += num;
    } while (num > 0);
    printf("누적된 값 : %d\n", sum);
    return 0;
}