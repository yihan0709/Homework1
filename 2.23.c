#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a>=b && a>=c){
        printf("%d", a);
    }else if (b>a && b>=c){
        printf("%d", b);
    }else if (c>a && c>b){
        printf("%d", c);
    }
    printf(" ");
    if (a<=b && a<=c){
        printf("%d", a);
    }else if (b<a && b<=c){
        printf("%d", b);
    }else if (c<a && c<b){
        printf("%d", c);
    }
    printf("\n");
}