/* 
 * 세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의해보자.
 * 예를 들어서 함수의 이름이 swap3라 하면, 다음의 형태로 함수가 호출되어야 한다.
 * 
 * swap3(&num1, &num2, &num3);
 * 
 * 그리고 함수호출의 결과로 num1에 저장된 값은 num2에, num2에 저장된 값은 num3에, 그리고 num3에 저장된 값은 num1에 저장되어야 한다.
 */
#include <stdio.h>
void swap3(int* num1, int* num2, int* num3);

int main(void) {
    int a, b, c;
    a = 10;
    b = 20;
    c = 30;
    swap3(&a, &b, &c);
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);
    return 0;
}

void swap3(int* num1, int* num2, int* num3) {
    int temp = *num3;
    *num3 = *num2;
    *num2 = *num1;
    *num1 = temp;
}
