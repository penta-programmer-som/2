#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int data[3][10];
void generageData()
{
	int i;
	int* p = &data[0][0];
	for (i = 0; i < 30; i++)
		*p++ = rand() % 100;
}

void printData()
{
	int i, j;
	int* p = &data[0][0];
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 10; j++)
			printf("%2d ", *p++);
		printf("\n");
	}
}

int totalData()
{
	int i, total = 0;
	int* p = &data[0][0];
	for (i = 0; i < 30; i++)
		total += *p++;
	return total;
}

int main(void)
{
	srand(200);
	generageData();
	printData();
	printf("전체의 합 = %d\n", totalData());
	return 0;
}