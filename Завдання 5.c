#include <stdio.h>
#include <math.h>

int main() {
    float h, c1, c2, s;
    printf("Задайте гіпотенузу: ");
    scanf("%f", &h);
    printf("Задайте перший катет: ");
    scanf("%f", &c1);
    if (h <= 0 || c1 <= 0)
    {
        printf("Не має такого трикутника.");
        return 0;
    }
    c2 = sqrt(pow(h, 2) - pow(c1, 2));
    s = 0.5 * h * c1 * sin(90);
    if (c2 <= 0)
    {
        printf("Не має такого трикутника.");
        return 0;
    }
    printf("Другий катет = %.2f\n", c2);
    printf("Площа трикутника = %.2f", s);
    return 0;
}
