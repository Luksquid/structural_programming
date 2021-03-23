#include <stdio.h>
#include <stdlib.h>
int* foo(int n)
{
    return malloc(n*sizeof(int));
}
int main()
{
    printf("%x", foo(3));
}
