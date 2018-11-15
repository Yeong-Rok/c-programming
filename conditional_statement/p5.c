/* 
 * 아래의 else if문을 switch문으로 변경하여 작성하시오.
 * 
 * ▶ Hint : switch(score/10)
 */
#include <stdio.h>

int main(void) {
    char grade = ' ';
    int score = 0;
    printf("점수를 입력하세요 : ");
    scanf("%d", &score);
    switch(score/10)
    {
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'F';
    }
    printf("\n학점은 %c입니다", grade);
    return 0;
}
