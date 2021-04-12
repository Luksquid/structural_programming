#include <stdio.h>
#include <stdlib.h>

int foo(int m, int n, int k)
{
    if(m%n == 0 && m%k == 0)
    {
        return 2;
    }
    else if(m%n == 0 || m%k == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    printf("%d\n", foo(12, 2, 3));
    printf("%d\n", foo(12, 7, 3));
    printf("%d\n", foo(12, 7, 5));
}
