#include <stdio.h>
#include <stdlib.h>

void foo(const int *n, int *m)
{
    *m = *n;
}
int main()
{
    const int n = 7;
    int m = 2;
    foo(&n, &m);
    printf("%d", m);
}
