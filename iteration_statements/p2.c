/*
3자리의 십진수를 입력 받아서 각 자리의 숫자들이 각각 짝수인지 홀수인지를 구분하여 출력하는 프로그램을 작성하시오.
예를 들어 456을 입력하면 "4 : 짝수, 5 : 홀수, 6 : 짝수"가 출력
*/
#include <stdio.h>

int main(void) {
    // 변수 선언
    int num = 0;
    int hundreds = 0;
    int tens = 0;
    int unit = 0;
    
    // 세 자리의 십진수 입력
    printf("세 자리의 십진수를 입력하세요. : ");
    scanf("%d", &num);
    
    // 각 자리의 숫자들이 짝수인지 홀수인지 구분
    hundreds = num/100;
    tens = (num - hundreds*100)/10;
    unit = num - hundreds*100 - tens*10;
    
    // 백의 자리 출력
    if (hundreds % 2 == 0)
    {
        printf("%d : 짝수, ", hundreds);
    } else
    {
        printf("%d : 홀수, ", hundreds);
    }
    
    // 십의 자리 출력
    if (tens % 2 == 0)
    {
        printf("%d : 짝수, ", tens);
    } else
    {
        printf("%d : 홀수, ", tens);
    }
    
    // 일의 자리 출력
    if (unit % 2 == 0)
    {
        printf("%d : 짝수\n", unit);
    } else
    {
        printf("%d : 홀수\n", unit);
    }
    
    return 0;
}