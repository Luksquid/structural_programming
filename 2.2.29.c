#include <stdio.h>
#include <stdlib.h>
int foo(int n, int m)
{
    int reszta = n%m;
    while(reszta != 0)
    {
        n=m;
        m=reszta;
        return foo(n, m);
    }
    return(m);
}
int main()
{
    printf("%d", foo(282, 78));
}
