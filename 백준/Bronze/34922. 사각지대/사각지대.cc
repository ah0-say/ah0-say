#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159265358979323846
#include <stdio.h>

int main()
{
	int w, h;
	int r;
	double area;
	double rarea;

	scanf("%d %d", &w, &h);
	scanf("%d", &r);
	
	area = w * h;
	rarea = (r * r * PI)/4.0;

	area = area - rarea;

	printf("%.2f", area);

	return 0;
}