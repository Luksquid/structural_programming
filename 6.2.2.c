#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
int ** foo(int n, int m)
{
    int ** tab = malloc(n * sizeof(int*));
    for(int i=0; i<n; i++)
    {
        *(tab + i) = malloc(m*sizeof(int));
    }
    return tab;
}
int main()
{
    printf("%p", foo(3, 5));
    return 0;
}
