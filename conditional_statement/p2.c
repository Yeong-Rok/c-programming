/*
 * if문을 이용하여 시험 점수가 80점 이상이면 합격 판별을 하는 프로그램을 작성하시오.
 * 
 * ▶ 출력결과
 * 점수를 입력하시오 : 95
 * 축하합니다. 합격입니다. 
 */
#include <stdio.h>

int main(void) {
    int score = 0;
    printf("점수를 입력하시오 : ");
    scanf("%d", &score);
    if (score >= 80) {
        printf("축하합니다. 합격입니다.");
    }
    return 0;
}