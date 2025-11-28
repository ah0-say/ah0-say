#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long fact(int n)
{
	if (n == 0)
		return 1L;
	else
		return n * fact(n - 1);
}
int main()
{
	int n;
	scanf("%d", &n);
	
	printf("%ld", fact(n));


	return 0;
}