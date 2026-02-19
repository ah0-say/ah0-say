#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	int fact = 1;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		fact = fact * (N - i);
	}
	
	printf("%d", fact);

	return 0;
}
