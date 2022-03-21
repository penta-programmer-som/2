#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FALSE 0
BOOL isPalindrome(char s[])
{
	int i, j;
	for (i = 0; s[i] != '\0'; i++);
	j = i;
	i = 0;
	while (i < j) {
		if (s[i] != s[j-1])
			return 0;
		i++;
		j--;
	}
	return 1;
}
int main(Void)
{
	char str[MAX_STRING];

	printf("* Palindrome체크\n\n");
	printf("문자열 입력(문자수 %d 이하): ", MAX_STRING);
	scanf("%s", str);

	if (isPalindrome(str))
		printf("\"%s\" is a Palindrome\n\n", str);
	else printf("\"%s\" isn't a Palindrome\n\n", str);
}