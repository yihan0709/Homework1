#include <stdio.h>

int main(void){
    float w, h, ans;
    printf("請輸入體重(kg)與身高(m): ");
    scanf("%f %f", &w, &h);

    ans = w / (h * h);
    printf("BMI = %.2f\n", ans);

    printf("BMI VALUES\nUnderweight: less than 18.5\nNormal: between 18.5 and 24.9\nOverweight: between 25 and 29.9\n Obese: 30 or greater\n");

    return 0;
}
