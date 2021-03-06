/*
 * 연습문제 4
 * 윤년의 조건을 판단하는 코드를 작성하시오.
 * 
 * 윤년은 연도가 4로 나누어 떨어짐
 * 단, 100으로 나누어 떨어지는 해는 제외
 * 400으로 나누어 떨어지는 해는 윤년
 * 키보드로 연도를 입력하면 윤년인지 아닌지 알려주는 코드를 작성
 */
#include <stdio.h>

int main()
{
    int year = 0;
    printf("연도를 입력하세요 : ");
    scanf("%d", &year);
    (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? printf("윤년입니다.") : printf("윤년이 아닙니다.");

    return 0;
}