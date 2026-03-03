	#define _CRT_SECURE_NO_WARNINGS
	#include <stdio.h>


	int main()
	{
		int M[11];
		for (int i = 0; i < 11; i++) {
			scanf("%d", &M[i]);
		}

		int N;
		scanf("%d", &N);

		int B, S;
		float L;
		int result = 0;
		for (int i = 0; i < N; i++) {
			scanf("%d %f %d", &B, &L, &S); 
			if (S >= 17 && L >= 2.0) {
					result += M[B];
			}
		}
		printf("%d\n", result);

		return 0;
	}