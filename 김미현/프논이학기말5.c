#define _CRT_SECURE_NO_WARNINGS
#define CHAR_MAX 100
#include <stdio.h>

int checking(char w0[], char w[])
{
	for (int i = 0; w0[i] != '\0'; i++) {
		if (w0[i] != w[i])
			return 0;
	}
	return 1;
}

int main(void)
{
	char password[CHAR_MAX] = "apple";
	char w1[CHAR_MAX], w2[CHAR_MAX], w3[CHAR_MAX];

	scanf("%s %s %s", w1, w2, w3);
	printf("%d", checking(password, w1));
	printf("%d", checking(password, w2));
	printf("%d", checking(password, w3));
	return 0;
}