#include <stdio.h>
#include <math.h>

int main() {
    float x, y, f;
    printf("Задайте x: ");
    scanf("%f", &x);
    printf("Задайте y: ");
    scanf("%f", &y);
    f = (pow(x, 2) + pow(y, 2)) / sqrt(x + y);
    printf("Значення f = %.2f", f);
    return 0;
}