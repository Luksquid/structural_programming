#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, c, d; int x = 0;
    scanf("%i %i %i %i", &a, &b, &c, &d);
    // a)
    do
    {
        x++;
    }
    while(fabs(a)*(x*x)+b*x+c<=d);
    printf("%i\n", x);
    x=0;

    // b)
    do
    {
        x++;
    }
    while(5 *(x*x)+a*x+b>=c);
    printf("%i\n", x);
    x=0;

    //c
    do
    {
        x++;
    }
    while(5 *(x*x)+a*x+b>c);
    printf("%i", x);
}
