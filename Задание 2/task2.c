#include "stdio.h"
#include "stdlib.h"
#define _USE_MATH_DEFINES
#include <math.h>

double f(double x)
{
    return (sin((M_PI/2)+3*x)/(1-sin(3*x-M_PI)));
}

void main ()
{
    double x = 5;
    printf ("x = %f\n",x);
    printf ("f = %5.4f\n",f(x));
    
    
    x = 0;
    printf("Input x1: ");
    scanf("%lf",&x);
    printf("x = %f\n", x);
    printf("f1 = %5.4f\n",f(x)); 
    
    system("pause");

    return;
    
}



