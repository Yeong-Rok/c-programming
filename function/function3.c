/*
아래의 그림과 같은 토지가 있다. 프로그램을 작성하여 총 면적을 계산하시오.
총 면적을 나타내는 totalArea 변수를 전역 변수로 사용하시오.
토지의 모양에 따라 넓이를 계산해주는 함수의 이름과 반환형은 아래와 같이 지정하고 매개변수는 적절하게 사용하ㅏ시오.
    정사각형 : int squareArea
    직사각형 : int rectangleArea
    삼각형 : double triangleArea
    원형 : double circleArea
*/
#include <stdio.h>

int squareArea(int side);
int rectangleArea(int width, int height);
double triangleArea(double base, double height); // 여기에서 실수로 int 넣으면 나눌 때 소수점 버려버린다!
double circleArea(double radius);

int main(void) {
    double totalArea; // 총면적
    totalArea = squareArea(4) + squareArea(3) + rectangleArea(5, 3) + triangleArea(3, 3) + triangleArea(7, 6) + circleArea(2);
    printf("The Total Area is %lf.\n", totalArea);
    return 0;
}

int squareArea(int side) {
    return side*side;
}
int rectangleArea(int width, int height) {
    return width*height;
}
double triangleArea(double base, double height) { 
    return base * height / 2;
}
double circleArea(double radius) {
    return radius * radius * 3.14; // 3.14 is pi
}