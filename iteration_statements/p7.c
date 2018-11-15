/*
중첩 반복문을 이용하여 아래의 실형결과와 같이 출력하는 코드를 작성하시오.
    맨 윗 줄은 5칸 들여쓰기, 그 다음 줄은 4칸 들여쓰기 ... 

        1
       12
      123
     1234
    12345
*/
#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 0; j < 5-i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}