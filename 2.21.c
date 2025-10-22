#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;

    for (i = 0; i < 9; i++) {
        if (i == 0 || i == 8) {
            for (j = 0; j < 9; j++)
                printf("*");
        } else {
            printf("*");
            for (j = 0; j < 7; j++)
                printf(" ");
            printf("*");
        }

        printf("   "); 

        if (i == 0 || i == 8) {
            printf("   ***   ");
        } else if (i == 1 || i == 7) {
            printf(" *     * ");
        } else {
            printf("*       *");
        }

        printf("   "); 

        if (i == 0)
            printf("    *    ");
        else if (i == 1)
            printf("   ***   ");
        else if (i == 2)
            printf("  *****  ");
        else
            printf("    *    ");

        printf("   "); 

        switch (i) {
            case 0: printf("    *    "); break;
            case 1: printf("   * *   "); break;
            case 2: printf("  *   *  "); break;
            case 3: printf(" *     * "); break;
            case 4: printf("*       *"); break;
            case 5: printf(" *     * "); break;
            case 6: printf("  *   *  "); break;
            case 7: printf("   * *   "); break;
            case 8: printf("    *    "); break;
        }

        printf("\n"); 
    }

    return 0;
}