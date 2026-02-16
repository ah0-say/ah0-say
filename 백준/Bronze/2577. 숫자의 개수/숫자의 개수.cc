	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>

	int main()
	{
		int A, B, C, mul;
		int num[10];

		scanf("%d", &A);
		scanf("%d", &B);
		scanf("%d", &C);
		mul = A * B * C;
		int count[10] = { 0 };
	
		while (mul > 0) {
			count[mul % 10]++;
			mul = mul / 10;
		}

		for (int i = 0; i < 10; i++) {
			printf("%d\n", count[i]);
		}
		return 0;
	}