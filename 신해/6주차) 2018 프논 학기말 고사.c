#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int mergeString(char c[], char a[], char b[])
{
	int i;
	int x = 0, y = 0;

	for (i = 0; i < sizeof(a) + sizeof(b); i++)
	{
		if (a[x] <= b[y])
		{
			c[i] = a[x];
			x++;
		}
		else
		{
			c[i] = b[y];
			y++;
		}
	}
	return c;
}
int main(void)
{
	char word1[10], word2[10];
	char mergedWord[20];
	scanf("%s", word1);
	scanf("%s", word2);
	mergeString(mergedWord, word1, word2);
	printf("%s\n", mergedWord);
}