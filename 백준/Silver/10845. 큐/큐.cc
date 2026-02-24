#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);

	int que[10000];
    int cnf = 0;
    int rn = 0;

	for (int i = 0; i < n; i++) {
		char dlq[10];
		scanf("%s", dlq);

        if (strcmp(dlq, "push") == 0) {
            int x;
            scanf("%d", &x);
            que[rn++] = x; 
        }
        else if (strcmp(dlq, "pop") == 0) {
            if (cnf == rn) {
                printf("-1\n");
            }
            else printf("%d\n", que[cnf++]);
        }
        else if (strcmp(dlq, "size") == 0) {
            printf("%d\n", rn- cnf);
        }
        else if (strcmp(dlq, "empty") == 0) {
            if (cnf == rn) {
                printf("%d\n", 1);
            }
            else
                printf("%d\n", 0);
        }
        else if (strcmp(dlq, "front") == 0) {
            if (cnf == rn) {
                printf("-1\n");
            }
            else
                printf("%d\n", que[cnf]);
        }
        else if (strcmp(dlq, "back") == 0) {
            if (cnf == rn) {
                printf("-1\n");
            }
            else
                printf("%d\n", que[rn-1]);
        }
	}
	return 0;
}