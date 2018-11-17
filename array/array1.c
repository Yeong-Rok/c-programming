/*
프로그램 사용자로부터 하나의 영단어를 입력 받아서 입력 받은 영단어의 길이를 계산하여 출력하는 프로그램을 작성해보자.
예를 들어서 "Array"라는 단어가 입력되면 5가 출력되어야 한다.
 */
#include <stdio.h>

int main(void) {
    char word[30];

    // 영단어를 입력받는다.
    printf("영단어를 입력하세요. : ");
    // scanf("%[^\n]s", word); // 공백도 받고 싶으면
    scanf("%s", word);

    
    // 영단어의 길이를 계산한다
    int i;
    int count = 0;
    for (i = 0; i < sizeof(word)/sizeof(word[0]); i++) {
        if (word[i] != '\0') count++; // word[i]에 값이 존재하면 count를 올려라.
    }

    // 길이를 출력한다.
    printf("영단어의 길이는 %d글자입니다.\n", count);
    return 0;
}