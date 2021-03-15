#include <stdio.h>
#include <stdlib.h>
void foo(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    int a=2, b=4;
    foo(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d", b);
}
