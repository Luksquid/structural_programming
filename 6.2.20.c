#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
void foo(int** tab1, int** tab2,int n, int m)
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
            *(*(temp + i)+j) = *(*(tab1 + i)+j);
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            *(*(tab1 + i)+j) = *(*(tab2 + i)+j);
            *(*(tab2 + i)+j) = *(*(temp + i)+j);
        }
    }
}
void wys(int **tab, int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ", tab[i][j]);
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
    int ** tab2 = malloc(n * sizeof(int**));
    for(int i=0; i<n; i++)
    {
        *(tab2 + i) = malloc(m * sizeof(int*));
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            *(*(tab + i) + j) = i+j;
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            *(*(tab2 + i) + j) = (i * j)%2 + 7;
            printf("%d ", tab2[i][j]);
        }
        printf("\n");
    }
    foo(tab, tab2, n, m);
    printf("\n");
    wys(tab, n, m);
    printf("\n");
    wys(tab2, n, m);
    return 0;
}
