#include <stdio.h>
#include <math.h>

int main() {
    float f, x;
    printf("Задайте x: ");
    scanf("%f", &x);
    if (x > 0)
    {
        f = pow(x, 2) + 5 * x - 6;
    }
    else if (x <= 0)
    {
        f = abs(x + cos(x));
    }
    printf("Значення f(x) = %.2f", f);
    return 0;
}