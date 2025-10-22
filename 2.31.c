#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("number\tsquare\tcube\n");
    for (int i=0; i<11; i++){
        int j = i*i;
        int k = j*i;
        printf("%d\t%d\t%d\n",i,j,k);
    }
}