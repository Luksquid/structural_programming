#include <stdio.h>
#include <stdlib.h>
int foo(int n)
{
    if(n == 0)
    {
        return 1;
    }
    if(n == 1)
    {
        return 2;
    }
    if(n%2 == 0)
    {
        return foo(n-2)+n;
    }
    if(n%2 == 1)
    {
        return foo(n-2)*n;
    }


}
int main()
{
    printf("%d\n", foo(1));
    printf("%d", foo(3));
}
