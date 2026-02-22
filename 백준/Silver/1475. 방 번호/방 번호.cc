#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int count[10] = { 0 };
	
	scanf("%d", &n);

	if (n == 0) {
		count[0]++;
	}

	while (n > 0) {
		count[n % 10]++;
		n = n / 10;
	}

	int sn = (count[6] + count[9] + 1) / 2;
	int max = sn;

	for (int i = 0; i < 10; i++) {
		if (i==6||i==9){
			continue;
		}
		if (count[i] > max) {
			max = count[i];
		}
	}
	printf("%d", max);

	return 0;
}