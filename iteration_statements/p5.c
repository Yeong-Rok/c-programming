/*
for문을 이용하여 1부터 100까지의 수들(100포함) 중 짝수의 합을 출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>

int main(void) {
    int i, sum = 0;
    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}