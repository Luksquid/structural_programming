#include <stdio.h>
#include <stdlib.h>
int foo(int *a, int *b)
{
    return *a + *b;
}
int main()
{
    int a=2, b=4;
    printf("%d\n",foo(&a, &b));
}
