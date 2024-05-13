#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 1 || n > 21 || n % 2 == 0) {
        return 1; 
    }

    int line = (n + 1) / 2 + 5;
    int space = line - 1;
    int star = 1;
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < space; j++) {
            printf(" ");
        }
        for (int j = 0; j < star; j++) {
            printf("*");
        }
        printf("\n");
        star += 2;
        space--;
    }


    space = ((line * 2) - 1 - n) / 2;
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < space; j++) {
            printf(" ");
        }
        for (int j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
