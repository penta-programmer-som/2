#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void mergeString(char c[], char a[], char b[])
{
	int i = 0, j = 0, k = 0;
	while (a[i] != '\0' && b[j] != '\0') {
		if (a[i] >= b[j])
			c[k++] = b[j++];
		else
			c[k++] = a[i++];
	}

	if (a[i] != '\0') {
		for (j = i; a[j] != '\0'; j++)
			c[k++] = a[j];
	}
	else
		for (i = j; b[i] != '\0'; i++)
			c[k++] = b[i];
	c[k] = '\0';
}

int main(void)
{
	char word1[10], word2[20];
	char mergeWord[20];

	scanf("%s %s", word1, word2);
	mergeString(mergeWord, word1, word2);
	printf("%s\n", mergeWord);
	return 0;
}