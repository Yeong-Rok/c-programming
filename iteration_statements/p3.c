/*
while문을 이용하여 1부터 100까지의 합을 출력하는 프로그램을 작성하시오.
*/
#include <stdio.h>

int main(void) {
    int i = 1;
    int sum = 0;
    while (i <= 100) {
        sum += i;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}