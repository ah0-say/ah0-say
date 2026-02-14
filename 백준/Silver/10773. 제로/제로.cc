#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int N, a;
    scanf("%d", &N);

    int ans[100000];
    int top = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &a);

        if (a == 0) {
            if (top > 0) top--;
        }
        else {
            ans[top++] = a;
        }
    }

    int all = 0;
    for (int i = 0; i < top; i++) {
        all += ans[i];
    }

    printf("%d\n", all);
    return 0;
}
