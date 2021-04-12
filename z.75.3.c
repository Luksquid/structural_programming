#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double ft1(double n)
{
    return n*n*n;
}
double ft2(double n)
{
    return n;
}
int foo(double (*f1)(double a1), double (*f2)(double a2), double x)
{
    int n = floor(x);
    for(int i=0; i<=n; i++)
    {
        double w1 = f1(i);
        double w2 = f2(i)*f2(i)*f2(i);
        if(w1 != w2)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    printf("%d", foo(&ft1, &ft2, 7));
}
