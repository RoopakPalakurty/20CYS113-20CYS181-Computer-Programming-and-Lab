#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
int i, j;
    printf("* \n");
    // Generate the upper half of the pattern
    for (i = 1; i <= n; i++) {
        printf("*");
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("*");
        printf("\n");
    }

    // Generate the lower half of the pattern
    for (i = n - 1; i >= 1; i--) {
        printf("*");
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
    printf("*");
        printf("\n");
    }
    printf("*");


    return 0;
}
