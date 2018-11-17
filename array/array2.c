/*
프로그램 사용자로부터 영단어를 입력 받아서 char형 배열에 저장한다.
그 다음 배열에 저장된 영단어를 역순으로 뒤집는다.
물론 이 때에 널 문자의 위치를 변경해서는 안 된다.
뒤집고 나서는 제대로 뒤집혀졌는지 확인하지 위해서 출력해보자.
 */
#include <stdio.h>

int main(void) {
    char word[30];
    int i;
    int length;

    printf("영단어를 입력하세요 : ");
    scanf("%s", word);

    for (i = 0; i < sizeof(word)/sizeof(word[0]); i++) {
        if (word[i] != '\0') length++;
    }

    for (i = 0; i <= length; i++) {
        printf("%c", word[length-i]);
    }
    printf("\n");
    return 0;
}