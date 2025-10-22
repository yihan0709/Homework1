#include <stdio.h>
#include <stdlib.h>

int main(void){
    for(int i=0; i<5; i++){
        switch (i){
            case 0 : printf("HHHHHHHHH\n"); break;
            case 1 : printf("    H    \n"); break;
            case 2 : printf("    H    \n"); break;
            case 3 : printf("    H    \n"); break;
            case 4 : printf("HHHHHHHHH\n"); break;
        }
    }
    printf("\n");
    for(int i=0; i<7; i++){
        switch (i){
            case 0 : printf("A        \n"); break;
            case 1 : printf("   A    \n"); break;
            case 2 : printf("    A A  \n"); break;
            case 3 : printf("    A   A\n"); break;
            case 4 : printf("    A A  \n"); break;
            case 5 : printf("   A     \n"); break;
            case 6 : printf("A        \n"); break;
        }
    }
    printf("\n");
    for(int i=0; i<5; i++){
        switch (i){
            case 0 : printf("NNNNNNNNN\n"); break;
            case 1 : printf("      N  \n"); break;
            case 2 : printf("    N    \n"); break;
            case 3 : printf("  N      \n"); break;
            case 4 : printf("NNNNNNNNN\n"); break;
        }
    }
    printf("\n");
}