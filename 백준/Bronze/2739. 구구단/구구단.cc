#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int j;
	scanf("%d", &j);
	for (int i=1 ; i <=9 ; i++) {
		printf("%d * %d = %d\n", j, i, j * i);
	}
		
	return 0;
}