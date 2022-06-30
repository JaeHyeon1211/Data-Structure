#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 1269;

	int N1000, N100, N10, N1, Buff;

	int A[] = { 0 };
	int B[] = { 0 };
	int i = 0;
	int j = 0;

	N1000 = num / 1000;
	Buff = num % 1000;
	N100 = Buff / 100;
	Buff = num % 100;
	N10 = Buff / 10;
	N1 = num % 10;
	

	printf("%3d%3d%3d%3d\n", N1000, N100, N10, N1);
	for (i; i < 10; i++)
	{
		if (N1000 % 2 == 0) {
			A[i] = N1000;
		}
	}
	for (j; j < 10; j++)
	{
		if(N1000 % 2 == 1)
		B[j] = N1000;
	}
	printf("%d%d", A[i], B[j]);
	
}