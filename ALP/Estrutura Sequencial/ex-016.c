#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265
#define E 2.71828

void main(void) {
    system("clear");
    float a, b, c, d, e, f, x;
     
    printf("Digite um numero: ");
    scanf("%f", &x);

    a = pow(x, 2) - 9 * x + 7;
    b = cos(x) + sin(x);
    c = pow(8 * x - 3, 1/5);
    d = pow(abs(x - 5), 1/3);
    e = sin(abs(2 * PI - x));
    f = pow((PI * E), pow(2 * x, 2));  

    printf("a) f(%.0f) = %.0f² - 9 ⋅ %.0f + 7 = %f\n", x, x, x, a);
    printf("b) f(%.0f) = cos(%.0f) + sen(%.0f) = %f\n", x, x, x, b);
    printf("c) f(%.0f) = ⁵√(8 ⋅ %.0f - 3) = %f\n", x, x, c);
    printf("d) f(%.0f) = ³√(|%.0f - 5|) = %f\n", x, x, d);
    printf("e) t(%.0f) = sen(|2π - %.0f|) = %f\n", x, x, e);
    printf("f) g(%.0f) = πe^(2 ⋅ %.0f²) = %f\n", x, x, f);

}

