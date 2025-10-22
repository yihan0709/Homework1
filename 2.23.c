#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b, c;
    int max, min;

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        max = a;
    else if (b >= a && b >= c)
        max = b;
    else
        max = c;

    if (a <= b && a <= c)
        min = a;
    else if (b <= a && b <= c)
        min = b;
    else
        min = c;

    printf("max=%d\n", max); 
    printf("min=%d\n", min);

    return 0;
}
