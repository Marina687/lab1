#include "stdio.h"
#define _USE_MATH_DEFINES
#include <math.h>
#include "func.h"

double x = 5;
double result;

void f2 (void)
{
    result = (sin((M_PI/2)+3*x))/(1-sin(3*x-M_PI));
}
