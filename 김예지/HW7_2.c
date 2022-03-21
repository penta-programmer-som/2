#include <stdio.h>
#include <stdlib.h>

void generateData(); // 2차원 배열에 난수 넣기 
void printData(); // 2차원 배열 출력
int totalData(); // 전체의 합 계산 
static int data[3][10]; // 계산 수행에 사용할 정적 변수 

int main(void)
{
	srand(200); // random 값 출력에 사용하는 함수. seed값을 부여 

	generateData();
	printData();

	printf("\n전체의 합은 : %d\n", totalData());
}

// 0~99 난수 저장 
void generateData()
{
	int* p = &data[0][0];
	int i;

	for (i = 0; i < 30; i++)
		*p++ = rand() % 100;
}

// 출력 
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