#include "stdio.h"
#include "stdlib.h"
#define _USE_MATH_DEFINES
#include <math.h>

void f(void);

double x = 5;
double result;


void main ()
{
    printf ("x = %f\n",x);
    f();
    printf ("f = %5.4f\n",result);
    printf("Input x: ");
    scanf("%lf",&x);
    f();
    printf("x = %f\n", x);
    printf("f = %5.4f\n",result); 
    system("pause");

       
}

void f(void)
{
   result = (sin((M_PI/2)+3*x))/(1-sin(3*x-M_PI));
}



