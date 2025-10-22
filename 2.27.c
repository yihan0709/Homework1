#include <stdio.h>
#include <stdlib.h>

int main(void){
    for(int i=0; i<5; i++){
        for(int j=0; j<9-((1+(i-1)*2)/2); j++){
            printf(" ");
        }
        for(int j=0; j<(1+(i-1)*2); j++){
            printf("*");
        }
        for(int j=0; j<9-((1+(i-1)*2)/2); j++){
            printf(" ");
        }
        printf("\n");
    }2
}