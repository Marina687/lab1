#include "stdio.h"
#include "stdlib.h"
#define _USE_MATH_DEFINES
#include <math.h>

double f(double x);

void main (void)
{
    double x = 5;
    printf ("x = %f\n",x);
    printf ("f = %5.4f\n",f(x));
    
    
    printf("Input x: ");
    scanf("%lf",&x);
    printf("x = %f\n", x);
    printf("f = %5.4f\n",f(x)); 
    
    system("pause");

    return;
    
}

double f(double x)
{
    return (sin((M_PI/2)+3*x))/(1-sin(3*x-M_PI));
}



