#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    if (a%b==0){
        printf("Yes\n");
    }else {
        printf("No\n");
    }
}