#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		for (int j = 1; j < N - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= (((i+1)*2)-1) ; k++) {
			printf("*");
		}
		printf("\n");
	}
	int n;
	n = N - 1;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j > 0; j--) {
			printf(" ");
		}
		for (int k = 1; k <= (((n-i) * 2) - 1); k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}