/* 
 * 키보드로 양수인 정수를 입력 받고
 * 조건 연산자를 이용하여 입력된 수가 짝수이면 “짝수”를, 홀수이면 “홀수”를 출력하시오.
 */
#include <stdio.h>

int main(void)
{
    unsigned int a = 0;
    printf("양수인 정수를 입력하세요 : ");
    scanf("%u", &a);
    a % 2 == 0 ? printf("짝수") : printf("홀수");
    return 0;
}