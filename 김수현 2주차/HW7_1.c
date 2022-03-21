#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h>
int data[10];
void generateDate() {
	int k;
	int* p;
	p = data;
	for (k = 0; k < sizeof(data) / sizeof(int); k++)
		*p++ = rand() % 100;
}
void printData() {
	int* pi = data;
	int i;
	for (i = 0; i < sizeof(data) / sizeof(int); i++)
		printf("%3d ", *pi++);
	printf("\n");
}
int totalData() {
	int* pi = data, sum = 0;
	int i;
	for (i = 0; i < sizeof(data) / sizeof(int); i++)
		sum += *pi++;
	return sum;
}
int maxDate() {
	int* pi = data;
	int max = -1;
	int i;
	for (i = 0; i < sizeof(data) / sizeof(int); i++)
		if (max < *pi)
			max = *pi++;
		else *pi++;
	return max;
}
int main(void) 
{
	srand(200);
	generateDate();
	printf("�߻��� 10���� ����:\n");
	printData();
	printf("10�� ������ ��=%d \n", totalData());
	printf("10���� ������ ���� ū �� = %d \n", maxDate());
}
