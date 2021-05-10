#define _USE_MATH_DEFINES
#include <math.h>

double f(double x)
{
    return (sin((M_PI/2)+3*x))/(1-sin(3*x-M_PI));
}
