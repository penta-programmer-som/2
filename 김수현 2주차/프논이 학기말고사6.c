#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_word_int_word(char w1[], int start, char w2[])
{
	int j, i = 0;
	for (j = start; w1[j] != '\0'; j++) {
		if (w1[j] != w2[i])
			return 0;
		i++;
		if (w2[i] == '\0')
			return 1;
	}
}
int main(void)
{
	char s1[20], s2[20];
	int i, j;

	scanf("%s", s1);
	scanf("%s", s2);

	for (i = 0; s1[i] != '\0'; i++)
		printf("%d", is_word_int_word(s1, i, s2));
}