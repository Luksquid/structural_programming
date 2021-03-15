#include <stdio.h>
#include <stdlib.h>
int foo(int *a, int *b)
{
    if(*a<*b)
    {
        return *a;
    }
    else
    {
        return *b;
    }
}
int main()
{
    int a=2, b=4;
    printf("%d", foo(&a, &b));
}
