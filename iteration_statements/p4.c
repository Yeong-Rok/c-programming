/*
연습문제 3의 while문을 for문으로 변경하여 작성하시오.
*/
#include <stdio.h>

int main(void) {
    int i, sum = 0;
    for (i = 1; i <= 100; i++) sum += i;
    printf("%d\n", sum);
    return 0;
}