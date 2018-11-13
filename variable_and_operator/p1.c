/*
 * 연습문제 1
 * 성적 출력
 * ▶ 국어, 영어, 수학 점수를 저장할 int형 변수를 선언하고 각각 70, 80, 90으로 초기화하시오.
 * ▶ 총점을 저장할 변수를 선언한 후 위의 과목에 대한 변수들을 이용하여 합을 저장하시오.
 * ▶ 변수명은 임의로 사용가능하며 주석을 포함하시오.
 *  ▹ 변수 선언시 주의사항 확인
 * ▶ 변수들을 이용하여 아래와 같이 출력화면이 표시되도록 하시오.
 * 국어 : 70, 영어 : 80, 수학 : 90
 * 총점 : 240
 */

#include <stdio.h>

int main(void)
{
    int korean=70;
    int english=80;
    int math=90;

    int total=korean + english + math;

    printf("국어 : %d, 영어 : %d, 수학 : %d \n", korean, english, math);
    printf("총점 : %d", total);

    return 0;
}