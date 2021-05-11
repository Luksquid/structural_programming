#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
int foo(int** tab,int n, int m)
{
    int * wynik = malloc(n * sizeof(int));
    int wyn = 0;
    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            wyn += *(*(tab + i)+j);
        }
        *(wynik + i) = wyn / m;
    }
    int w = *wynik;
    int ind = 0;
    for(int i = 0; i<n; i++)
    {
        if(*(wynik + i) > w)
        {
            w = *(wynik + i);
            ind = i;
        }
    }
    return ind;
}

int main()
{
    int n = 5;
    int m = 4;
    int ** tab = malloc(n * sizeof(int**));
    for(int i=0; i<n; i++)
    {
        *(tab + i) = malloc(m * sizeof(int*));
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            *(*(tab + i) + j) = i + j;
            printf("[%d, %d] = %d\n", i, j, tab[i][j]);
        }
    }
    printf("%d", foo(tab, n, m));
    return 0;
}
