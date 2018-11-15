#include <stdio.h>
#include <stdlib.h>

int main()
{
    double score = 0;
    char grade = ' ';
    printf("점수를 입력하시오 : ");
    scanf("%lf", &score);
    if (score >= 90)
    {
        grade = 'A';
    }
    else if (score >= 80)
    {
        grade = 'B';
    }
    else if (score >= 70)
    {
        grade = 'C';
    }
    else if (score >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    printf("학점은 %c입니다.", grade);
    return 0;
}