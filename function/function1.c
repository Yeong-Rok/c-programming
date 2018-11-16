/*
정수와 사칙연산 기호를 입력 받아 연산을 하는 코드를 작성하시오.
연산은 함수를 이용하여 동작하도록 하시오.
    > 피연산자 2개를 먼저 입력 받고 연산자를 입력 받음
*/
#include <stdio.h>

double plus(double, double);
double minus(double, double);
double multiply(double, double);
double divide(double, double);
void output(double);

int main(void) {
    double num1, num2, result;
    char ch;
    printf("피연산자와 사칙연산자가 포함된 수식을 입력 : ");
    scanf("%lf %lf %c", &num1, &num2, &ch);
    switch(ch) {
    case '+':
        result = plus(num1, num2);
        break;
    case '-':
        result = minus(num1, num2);
        break;
    case '*':
        result = multiply(num1, num2);
        break;
    case '/':
        result = divide(num1, num2);
        break;
    }
    output(result);
    return 0;
}


double plus(double a, double b) {
    double val;
    val = a + b;
    return val;
}
double minus(double a, double b) {
    double val;
    val = a - b;
    return val;
}
double multiply(double a, double b) {
    double val;
    val = a * b;
    return val;
}
double divide(double a, double b) {
    double val;
    val = a / b;
    return val;
}
void output(double a) {
    printf("결과: %lf \n", a);
    return;
}
