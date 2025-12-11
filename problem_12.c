#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int mid = (n + 1) / 2;

    for (int i = 1; i <= n; i++) {
        int stars = (i <= mid) ? (2*i - 1) : (2*(n-i) + 1);
        int underscores = (n - stars) / 2;

        for (int j = 1; j <= underscores; j++)
            printf("_");
        for (int j = 1; j <= stars; j++)
            printf("*");
        for (int j = 1; j <= underscores; j++)
            printf("_");

        printf("\n");
    }

    return 0;
}
