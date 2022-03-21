#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 알파벳 순으로 나열된 두 개의 스트링을 입력받고 하나로 합쳐서 c라는 새로운 스트링을 만드는 함수 
void mergeString(char c[], char a[], char b[])
{
	int w1Len = 0, w2Len = 0;
	int w1 = 0, w2 = 0;
	int i, j;

	for (i = 0; a[i] != '\0'; i++);
	w1Len = i;

	for (i = 0; b[i] != '\0'; i++);
	w2Len = i;

	for (i = 0; i <= w1Len + w2Len + 1; i++) {
		if (w1 >= w1Len) {
			c[i] = b[w2];
			w2++;
		}
		else if (w2 >= w2Len) {
			c[i] = a[w1];
			w1++;
		}
		else if (a[w1] <= b[w2])
		{
			c[i] = a[w1];
			w1++;
		}
		else if (a[w1] > b[w2]) {
			c[i] = b[w2];
			w2++;
		}
		else if (i == w1Len + w2Len + 1)
			c[i] = '\0';
	}
	return;
}

int main(void)
{
	char word1[10], word2[10];
	char mergeWord[20];

	scanf("%s", word1);
	scanf("%s", word2);

	mergeString(mergeWord, word1, word2);
	printf("%s\n", mergeWord);
}