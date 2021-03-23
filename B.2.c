#include <stdio.h>
#include <stdlib.h>
int foo(int n)
{
    if(n==0 || n==1)
    {
        return 3;
    }
    if(n%2==0)
    {
        return foo(n-2) + n;
    }
    if(n%2==1)
    {
        return 2 * foo(n-1) - 2 * n;
    }
}


int main()
{
    printf("%d", foo(3));
}
