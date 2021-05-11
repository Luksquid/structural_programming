#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
int ** foo(int n)
{
    int ** tab = malloc(n * sizeof(int**));
    for(int i=0; i<n; i++)
    {
        *(tab + i) = malloc(i + 1 * sizeof(int*));
    }
    return tab;
}
int main()
{
    int ** tab = foo(4);
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<i+1; j++)
        {
            *(*(tab + i) + j) = i + j;
            printf("[%d, %d] = %d\n", i, j, tab[i][j]);
        }
    }
    return 0;
}
