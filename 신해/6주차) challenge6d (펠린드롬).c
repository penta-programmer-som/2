#define _CRT_SECURE_NO_WARNINGS
#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FALSE 0
#include <stdio.h>
// Palindrome �˻�
BOOL isPalindrome(char str[]);
int main(void)
{
	char str[MAX_STRING];
	printf("* Palindrome üũ\n\n");
	printf("���ڿ� �Է�(���ڼ� %d ����): ", MAX_STRING);
	scanf("%s", str);
	if (isPalindrome(str)) // Palindrome �˻�
		printf("\"%s\" is a Palindrome\n\n", str);
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);
	return 0;
}
BOOL isPalindrome(char s[])
{
	//���ڿ� s
	//üũ�ؼ� palindrome�̸� TRUE���� palindrome�ƴϸ� FALSE���� return�Ѵ�.
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