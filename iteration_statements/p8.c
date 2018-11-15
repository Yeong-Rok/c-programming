/*
아래와 같이 구구단이 출력되도록 프로그램을 작성하시오.
2~9단까지 출력되도록 하시오.
%2d 서식문자를 사용하여 구구단의 몫이 가지런히 출력되도록 하시오.
*/
#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 2; i <= 9; i++) {
        printf("----%d단----\n", i);
        for (j = 1; j <= 9; j++) {
            printf("%d x %d = %2d\n", i, j, i*j);
        }
    }
}