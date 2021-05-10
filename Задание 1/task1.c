#include "stdio.h"
#include "stdlib.h"
#define _USE_MATH_DEFINES
#include <math.h>

void main()
{
    double x = 5;
    double f;
    f = (sin((M_PI / 2) + 3 * x)) / (1 - sin(3 * x - M_PI));
    printf("x = %f\n", x);
    printf("f = %5.4f\n", f);

    x = 0;
    printf("Input x1: ");
    scanf("%lf", &x);
    printf("x = %f\n", x);

    f = (sin((M_PI / 2) + 3 * x)) / (1 - sin(3 * x - M_PI));
    printf("f1 = %5.4f\n", f);

    system("pause");

    return;

}



