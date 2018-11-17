/*
2개의 정수를 받아서 합과 곱을 동시에 연산하는 함수를 작성하고 메인 함수에서 호출하시오.
*/
#include <stdio.h>
void get_sum_mul(int x, int y, int* p_sum, int* p_mul);

int main(void) {
    int num1, num2, sum, mul;
    printf("두 개의 정수를 입력하세요. : ");
    scanf("%d %d", &num1, &num2);
    get_sum_mul(num1, num2, &sum, &mul);
    printf("sum = %d, mul = %d\n", sum, mul);
    return 0;
}

void get_sum_mul(int x, int y, int* p_sum, int* p_mul) {
    *p_sum = x + y;
    *p_mul = x * y;
}
