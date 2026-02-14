#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, a;
	int ans[100000];
	int fin = 0;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &a);

		if (a == 0) {
			if (fin > 0) fin--;
		}
		else {
			ans[fin] = a;
			fin++;
		}
	}
	int all = 0;
	for (int i = 0; i < fin; i++) {
		all += ans[i];
	}


	printf("%d\n", all);
	return 0;
}