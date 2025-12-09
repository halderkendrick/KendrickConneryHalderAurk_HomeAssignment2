#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        int start = (i % 2 == 1) ? 1 : 0;

        for (int j = 0; j < num; j++) {
            printf("%d", (start + j) % 2);
        }
        printf("\n");
    }

    return 0;
}
