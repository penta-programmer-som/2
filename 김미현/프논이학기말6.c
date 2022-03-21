#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_word_in_word(char w1[], int start, char w2[])
{
	int i, j, k;
	for (i = start; w1[i] != '\0'; i++) {
		k = i;
		for (j = 0; w2[j] != '\0'; j++) {
			if (w1[k++] != w2[j])
				return 0;
		}
		if (w2[j] == '\0')
			return 1;
	}
	return 0;
}

int main(void)
{
	char s1[20], s2[20];
	int i;
	scanf("%s %s", s1, s2);
	for (i = 0; s1[i] != '\0'; i++)
		printf("%d", is_word_in_word(s1, i, s2));
	return 0;
}