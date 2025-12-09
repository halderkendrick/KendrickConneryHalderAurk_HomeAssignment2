#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        if (i == mid) {
            for (int j = 0; j < n; j++)
                printf("H");
        } else {
            printf("H");
            for (int j = 0; j < n - 2; j++)
                printf(" ");
            printf("H");
        }
        printf("\n");
    }

    return 0;
}
