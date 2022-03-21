#include <stdio.h>
#include <stdlib.h>

void generateData(); // 2���� �迭�� ���� �ֱ� 
void printData(); // 2���� �迭 ���
int totalData(); // ��ü�� �� ��� 
static int data[3][10]; // ��� ���࿡ ����� ���� ���� 

int main(void)
{
	srand(200); // random �� ��¿� ����ϴ� �Լ�. seed���� �ο� 

	generateData();
	printData();

	printf("\n��ü�� ���� : %d\n", totalData());
}

// 0~99 ���� ���� 
void generateData()
{
	int* p = &data[0][0];
	int i;

	for (i = 0; i < 30; i++)
		*p++ = rand() % 100;
}

// ��� 
void printData()
{
	int i, j;
	int* p = &data[0][0];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 10; j++) {
			printf("%2d  ", *p++);
			if (j == 9)
				printf("\n");
		}
	}
	printf("\n");
}

int totalData()
{
	int* p = &data[0][0];
	int i, total = 0;

	for (i = 0; i < 30; i++)
		total += *p++;
	return total;
}