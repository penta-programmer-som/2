#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 문자열 w2가 문자열 w1의 start 위치에 있으면 1, 아니면 0 반환하는 함수 
int is_word_in_word(char w1[], int start, char w2[]) // start - 0 1 2 3 4 5 
{
	int j;

	for (j = 0; w2[j] != '\0'; j++) {
		if (w1[start] == w2[j])
			start++;
		else
			return 0;
	}
	return 1;
}

int main(void)
{
	char s1[20], s2[20];
	int i, j;

	scanf("%s", s1); // ababcd
	scanf("%s", s2); // abc 

	for (i = 0; s1[i] != '\0'; i++)
		printf("%d", is_word_in_word(s1, i, s2));
	printf("\n");
}