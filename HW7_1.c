#include <stdio.h>
#include <stdlib.h>

void generateData(); // 배열에 난수 넣기  
void printData(); // 출력
int totalData(); // 엘리먼트 합 구하기 
int maxData(); // 가장 큰 수 찾기 
int data[10]; // 계산 수행에 사용할 전역 변수 

int main(void)
{
	srand(200); // random 값 출력에 사용하는 함수, seed 값 부여 
	generateData();

	printf("발생된 10개의 난수 : \n");
	printData();

	printf("10개의 난수의 합 = %d\n", totalData());

	printf("10개 난수 중 가장 큰 수 = ");
	maxData();
}

// generate 함수는 data[0] ~ data[9]에 난수를 넣는다 
void generateData()
{
	int k;
	int* p;
	p = data; // p = &data[0]

	for (k = 0; k < 10; k++) // [0]~[9] 난수값 부여 
		*p++ = rand() % 100;
}

// printData 함수는 data[0] ~[9] 까지의 값을 출력한다 
void printData()
{
	int* pi = data;
	int i;

	for (i = 0; i < 10; i++)
		printf("%d ", *pi++);
	printf("\n");
}

// totalData함수는 data[0]에서 data[9]까지의 값을 모두 더해 그 결과를 반환한다
int totalData()
{
	int* pi = data, sum = 0;
	int i;

	for (i = 0; i < 10; i++)
		sum += *pi++;
	return sum;
}

// maxData함수는 엘리먼트 중 가장 큰 수를 찾아 출력 
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