#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int A,B,V;
	int i;

	scanf("%d %d %d", &A, &B, &V);

	i = (V - B) / (A - B);
	if ((V - B) % (A - B) != 0)
		i++;

	printf("%d", i);

	return 0;
}