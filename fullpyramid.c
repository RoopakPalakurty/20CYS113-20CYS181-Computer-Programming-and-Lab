#include <stdio.h>

int main() {
    int r, i, j, space;

    scanf("%d", &r);

 if(r>0 && r<25){
         space = r;

    for (i = 1; i <= r; i++) {
        for (j = 1; j < space; j++) {
            printf("  ");
        }
        space--;

        for (j = 1; j <= 2*i-1; j++) {
            printf("* ");
        }
        printf("\n");
    }
 }
 else{
     printf("Invalid Input");
 }

    return 0;
}
