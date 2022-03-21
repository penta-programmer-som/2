#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void generateData();
void printData();
int totalData();
int maxData();
int data[10]; // 계산 수행에 사용할 전역 변수
int main(void)
{
	srand(time(NULL));
	generateData();
	printf("발생된 10개의 난수:\n");
	printData();
	printf("10개 난수의 합 = %d \n", totalData());
	printf("10개 난수중 가장 큰 수 = %d \n", maxData());
}
// generateData 함수는 data[0]..data[9]에 난수를 넣는다.
void generateData()
{
	int k;
	int* p;
	p = data; //혹은 p = &data[0]
	for (k = 0; k < 10; k++) // Index 0..9까지 난수값 부여
		*(p + k) = rand() % 100;
}
// printData 함수는 data[0]..data[9]의 값을 출력한다.
void printData()
{
	int* pi = data;
	int i;
	for (i = 0; i < 10; i++)
		printf("%d ", *(pi + i));
}
// totalData 함수는 data[0]에서 data[9]까지의 값을 모두 더해 그 결과를 반환한다.
int totalData()
{
	int* pi = data, sum = 0;
	int i;
	for (i = 0; i < 10; i++)
		sum += *(pi + i);
	return sum;
}
int maxData()
{
	int max = 0;
	int i;
	int* pi = data;

	for (i = 0; i < 10; i++)
	{
		if (max <= *(pi + i))
			max = *(pi + i);
	}

	return max;
}