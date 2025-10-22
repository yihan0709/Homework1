#include <stdio.h>
#include <stdlib.h>

int main(void){
    float a, b, c, d, e, ans;
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    ans = a/c;
    ans = ans*b;
    ans = ans + d;
    ans = ans + e;
    printf("%f\n", ans);
}