#include <stdio.h>
#include <stdlib.h>
void foo(int n, int *w)
{
    *w = n;
}
int main()
{
    int w=2;
    foo(15, &w);
    printf("w = %d", w);
}
