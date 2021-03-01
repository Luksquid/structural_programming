#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c; float delta, x1, x2, x0;
    scanf("%f %f %f", &a, &b, &c);
    delta = (b*b)-4*a*c;
    if(delta>0)
    {
        x1 = b*(-1) - sqrt(delta);
        x2 = b*(-1) + sqrt(delta);
        printf("x1 = %f x2 = %f", x1, x2);
    }
    else if(delta==0)
    {
        x0 = (b*(-1))/(2*a);
        printf("x0 = %f", x0);
    }
    else
    {
        printf("Brak rozwiazan");
    }
}
