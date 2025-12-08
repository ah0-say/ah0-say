#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, x;
    
    scanf("%d %d", &n, &x);
    
    int str[10001]; 

    for (int i = 0; i < n; i++)
        scanf("%d", &str[i]);
    
    for (int i = 0; i < n; i++) {
        if (str[i] < x)
            printf("%d ", str[i]);
    }
    return 0;
}