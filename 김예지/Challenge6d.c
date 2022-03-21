#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FALSE 0
// Palindrome 검사 
BOOL isPalindrome(char str[]);

int main(void)
{
	char str[MAX_STRING];

	printf("* Palindrome 체크 \n\n");
	printf("문자열 입력(문자수 %d 이하) : ", MAX_STRING);
	scanf("%s", str);

	if (isPalindrome(str))
		printf("\"%s\" is a Palindrome\n\n", str);
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);

	return 0;
}


BOOL isPalindrome(char s[])
{
	//	문자열 s를 체크해서 palindromd이면 true 값, 아니면 false 값 
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++);
	len = i;

	for (i = 0; i < len / 2; i++)
		if (s[i] != s[len - i - 1]) // 뒤랑 앞 검사하기 
			return FALSE; //	같지않다면 FALSE 값 반환 

	return TRUE;
}