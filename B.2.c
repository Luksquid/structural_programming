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
        return foo(n/2-1) + n/2;
    }
    if(n%2==1)
    {
        return 2 * foo(n-1) - (n-1);
    }
}


int main()
{
    for(int i = 0; i<=4;i++)
    {
        printf("%d\n", foo(i));
    }
}
