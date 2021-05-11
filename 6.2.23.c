#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
void foo(int** tab,int n, int m)
{
    int ** temp = malloc(n * sizeof(int**));
    for(int i=0; i<n; i++)
    {
        *(temp + i) = malloc(m * sizeof(int*));
    }
    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            *(*(temp + i)+j) = *(*(tab + i)+j);
        }
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<m; j++)
        {
            tab[i][j] = temp[i+1][j];
        }
    }
    for(int j=0; j<m; j++)
    {
        tab[n-1][j] = temp[1][j];
    }
}
void wys(int **tab, int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("[%d, %d] = %d\n", i, j, tab[i][j]);
        }
        printf("\n");
    }
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
        };
    }
    wys(tab, n, m);
    foo(tab, n, m);
    wys(tab, n, m);
    return 0;
}
