#include <stdio.h>
#include "basicMath.c"
#include "myMath.h"
#include "power.c"


int main(int argc, char const *argv[]) 
{
    double x;
    printf("please insert a real number \n");
    scanf("%lf",&x);
    double Firstresult;
    double Secondresult;
    double Thirdresult;
    if (x == 0) Firstresult = -1;
    Firstresult = sub( add(Exponent(x), Power (x,3) ),2.0);
    printf("The value of f(x)=e^x+x^3−2 at the point %.4f is: %.4f \n", x, Firstresult);
    Secondresult = add(mul(x, 3), mul(Power(x,2), 2));
    printf("The value of f(x)=3x+2x^2 at the point %.4f is: %.4f \n", x, Secondresult);
    Thirdresult = sub(div((mul(Power(x,3), 4)), 5), mul(x,2));
    printf("The value of f(x)=(4x^3)/5-2x at the point %.4f is: %.4f \n", x, Thirdresult);
    return 0;
}