#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int oddCount = 0;
int evenCount = 0;
int arr[];

void countOE(const int* const arr, int size) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 1)
		{
			oddCount++;
		}
		else
		{
			evenCount++;
		}
	}
}
int main(void) {
	int num = 1269;

	int N1000, N100, N10, N1, Buff;

	int A[] = { 0 };
	int B[] = { 0 };


	N1000 = num / 1000;
	Buff = num % 1000;
	N100 = Buff / 100;
	Buff = num % 100;
	N10 = Buff / 10;
	N1 = num % 10;

	
	


	printf("%3d%3d%3d%3d\n", N1000, N100, N10, N1);
	

}