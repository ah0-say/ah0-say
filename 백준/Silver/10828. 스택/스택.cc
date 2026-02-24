#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);

	int sta[10000];
	int top = -1;

	for (int i = 0; i < n; i++) {
		char dlq[10];
		scanf("%s", dlq);

        if (strcmp(dlq, "push") == 0) {
            int x;
            scanf("%d", &x);
            sta[++top] = x; 
        }
        else if (strcmp(dlq, "pop") == 0) {
            if (top == -1) {
                printf("-1\n");
            }
            else printf("%d\n", sta[top--]);
        }
        else if (strcmp(dlq, "size") == 0) {
            printf("%d\n", top + 1);
        }
        else if (strcmp(dlq, "empty") == 0) {
            if (top == -1) {
                printf("%d\n", 1);
            }
            else
                printf("%d\n", 0);
        }
        else if (strcmp(dlq, "top") == 0) {
            if (top == -1) {
                printf("-1\n");
            }
            else
                printf("%d\n", sta[top]);
        }
	}
	return 0;
}