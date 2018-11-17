/*
프로그램 사용자로부터 영단어를 입력 받는다
그리고 나서 입력 받은 영단어를 구성하는 문자 중에서 아스키 코드의 값이 가장 큰 문자를 찾아서 출력하는 프로그램을 작성해보자.
예를 들어서 입력된 영단어가 "LOVE"라면 이 중에서 아스키 코드 값이 가장 큰 문자는 V이므로 V가 출력되어야 한다.
 */
#include <stdio.h>

int main(void) {
    char word[30];
    int max, i;
    printf("영단어를 입력하세요. : ");
    scanf("%s", word);

    max = word[0];
    for (i = 1; i < sizeof(word)/sizeof(word[0]); i++) {
        if (word[i] > word[i-1]) max = word[i];
    }
    printf("%c\n", max);
    return 0;
}