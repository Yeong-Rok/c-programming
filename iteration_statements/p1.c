/*
두 개의 정수를 입력 받아서 큰 수를 출력하는 코드를 작성하시오.
    scanf함수로 여러 개의 정수를 입력 받는 방법
        아래와 같이 scanf함수로 여러 개의 데이터를 입력 받는 경우, 스페이스바, 탭키, 엔터키를 눌러서 구분
        scanf("%d %d %d", &a, &b, &c);

        두 수가 같은 경우에는 해당 메시지를 출력하시오.
        "두 개의 숫자는 같습니다."
*/

#include <stdio.h>

int main(void) {
    int a = 0;
    int b = 0;
    printf("두 개의 정수를 입력하세요. : ");
    scanf("%d %d",&a, &b);
    if (a > b) printf("%d\n", a);
    else if (a < b) printf("%d\n", b);
    else printf("두 개의 숫자는 같습니다.\n");
    return 0;
}