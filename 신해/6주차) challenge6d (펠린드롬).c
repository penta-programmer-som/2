#define _CRT_SECURE_NO_WARNINGS
#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FALSE 0
#include <stdio.h>
// Palindrome 검사
BOOL isPalindrome(char str[]);
int main(void)
{
	char str[MAX_STRING];
	printf("* Palindrome 체크\n\n");
	printf("문자열 입력(문자수 %d 이하): ", MAX_STRING);
	scanf("%s", str);
	if (isPalindrome(str)) // Palindrome 검사
		printf("\"%s\" is a Palindrome\n\n", str);
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);
	return 0;
}
BOOL isPalindrome(char s[])
{
	//문자열 s
	//체크해서 palindrome이면 TRUE값을 palindrome아니면 FALSE값을 return한다.
	int i;
	int x;

	for (x = 0; s[x] != '\0'; x++);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[x - i - 1] != s[i])
			return 0;
	}
	return 1;
}