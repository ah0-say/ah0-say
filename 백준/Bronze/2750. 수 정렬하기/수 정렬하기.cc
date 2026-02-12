#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);

	int str[1000];

	for (int i = 0; i < N; i++) {
		scanf("%d", &str[i]);
	};	

	for (int i = 0; i < N - 1; i++) {
		int min = i;
		for (int j = i + 1; j < N; j++)
			if (str[j] < str[min]) {
				min = j;
			}
		int tmp = str[i];
		str[i] = str[min];
		str[min] = tmp;
	}
	for (int i = 0; i < N; i++) {
		printf("%d\n", str[i]);
	}
	
	return 0;

}