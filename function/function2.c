/*
1부터 사용자가 입력한 정수n까지의 합을 구하는 재귀함수를 작성하시오.
*/
#include <stdio.h>
int sum(int n);
int input(void);
void output(int result);

int main(void) {
    int num, result;
    printf("정수를 입력하세요 : ");
    num = input();
    result = sum(num);
    output(result);
    return 0;
}

int sum(int n){
    if (n < 2) return n;
    else return n + sum(n-1);
}

int input(void){
    int val;
    scanf("%d", &val);
    return val;
}

void output(int result) {
    printf("1부터의 총합 : %d\n", result);
    return;
}