#include <stdio.h>
#include <stdlib.h>

int main(void){
    float w, h, ans;
    scanf("%f %f", &w, &h);
    ans = w*703;
    ans = ans/h;
    ans = ans/h;
    printf("%f\n", ans);
    printf("BMI VALUES\nUnderweight: less than 18.5\nNormal: between 18.5 and 24.9\nOverweight: between 25 and 29.9\n Obese: 30 or greater\n");
}