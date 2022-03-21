#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
// 문자열 w2 가 문자열 w1 의 start 위치에 있으면 1 을, 아니면 0 을 반환하는 함수 
int is_word_in_word(char w1[], int start, char w2[])
{
    int i, result = 0, len = 0;

    for (i = 0; w2[i] != '\0'; i++)
        len++;

    for (i = 0; i < len; i++)
    {
        if (w1[start + i] == w2[i])
            result = 1;

        else if (w1[start + i] != w2[i])
        {
            result = 0;
            break;
        }
    }

    return result;
}
/*
int is_word_in_word(char w1[], int start, char w2[])
{
    int i;

    for (i = 0; w2[i] != '\0'; i++) {
        if (w1[start] == w2[i])
            return 0;
        else
            start++;
    }
    return 1;
}*/
int main(void) // main 은 변경하지 말고 사용한다. 변경시 감점 
{
    char s1[20], s2[20];
    int i, j;
    scanf("%s", s1);
    scanf("%s", s2);
    for (i = 0; s1[i] != '\0'; i++)
        printf("%d", is_word_in_word(s1, i, s2));
}
