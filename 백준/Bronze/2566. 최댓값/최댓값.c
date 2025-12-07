#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int str[9][9];
	int max = -1;
	int row, col;

	for (int i = 0; i <= 8; i++)
		for (int j = 0; j <= 8; j++) {
			scanf("%d", &str[i][j]);
			if (max < str[i][j]) {
				max = str[i][j];
				row = i+1;
				col = j+1;	
			}
		}
	printf("%d\n", max);
	printf("%d %d", row, col);
	return 0;

}