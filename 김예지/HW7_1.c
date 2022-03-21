#include <stdio.h>
#include <stdlib.h>

void generateData(); // �迭�� ���� �ֱ�  
void printData(); // ���
int totalData(); // ������Ʈ �� ���ϱ� 
int maxData(); // ���� ū �� ã�� 
int data[10]; // ��� ���࿡ ����� ���� ���� 

int main(void)
{
	srand(200); // random �� ��¿� ����ϴ� �Լ�, seed �� �ο� 
	generateData();

	printf("�߻��� 10���� ���� : \n");
	printData();

	printf("10���� ������ �� = %d\n", totalData());

	printf("10�� ���� �� ���� ū �� = ");
	maxData();
}

// generate �Լ��� data[0] ~ data[9]�� ������ �ִ´� 
void generateData()
{
	int k;
	int* p;
	p = data; // p = &data[0]

	for (k = 0; k < 10; k++) // [0]~[9] ������ �ο� 
		*p++ = rand() % 100;
}

// printData �Լ��� data[0] ~[9] ������ ���� ����Ѵ� 
void printData()
{
	int* pi = data;
	int i;

	for (i = 0; i < 10; i++)
		printf("%d ", *pi++);
	printf("\n");
}

// totalData�Լ��� data[0]���� data[9]������ ���� ��� ���� �� ����� ��ȯ�Ѵ�
int totalData()
{
	int* pi = data, sum = 0;
	int i;

	for (i = 0; i < 10; i++)
		sum += *pi++;
	return sum;
}

// maxData�Լ��� ������Ʈ �� ���� ū ���� ã�� ��� 
int maxData()
{
	int* pi = data;
	int max = -1;

	for (int i = 0; i < 10; i++) {
		if (*pi > max)
			max = *pi++;
	}
	printf("%d\n", max);
}