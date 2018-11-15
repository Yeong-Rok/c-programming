/*
 * 키보드로 입력 받은 수가 3의 배수인지 판별하는 프로그램을 작성하시오.
 * 
 * ▶ 출력결과
 * 양수를 입력하시오 : 129
 * 3의 배수입니다. 
 */
#include <stdio.h>

int main(void) {
    int num = 0;
    printf("양수를 입력하시오 : ");
    scanf("%d", &num);
    if (num % 3 == 0) {
        printf("3의 배수입니다.\n");
    } else {
        printf("3의 배수가 아닙니다.\n");
    }
    return 0;
}