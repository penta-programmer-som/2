#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int data[10];
void generageData()
{
	int i;
	int* p = data;
	for (i = 0; i < 10; i++)
		*p++ = rand() % 100;
 }

void printData()
{
	int i;
	int* p = data;
	for (i = 0; i < 10; i++)
		printf("%d ", *p++);
	printf("\n");
}

int totalData()
{
	int i, total = 0;
	int* p = data;
	for (i = 0; i < 10; i++)
		total += *p++;
	return total;
}

int maxData()
{
	int i, max;
	int* p = data;
	max = *p;
	for (i = 0; i < 10; i++) {
		if (max < *p)
			max = *p;
		p++;
	}
	return max;
}

int main(void)
{
	srand(200);
	generageData();
	printf("발생된 10개의 난수 : \n");
	printData();
	printf("10개 난수의 합 = %d\n", totalData());
	printf("10개 난수 중 가장 큰 수 = %d\n", maxData());
	return 0;
}