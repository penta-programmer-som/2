#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
void mergeString(char c[], char a[], char b[])
{
	int i = 0, j = 0;
	int index = 0;

	while (a[i] != '\0' && b[i] != '\0') {
		if (a[i] < b[j])
			c[index++] = a[i++];
		else
			c[index++] = b[j++];
	}
	while(b[j]!='\0')
		c[index++] = b[j++];
	while (a[i] != '\0')
		c[index++] = a[i++];
	c[index]='\0';
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