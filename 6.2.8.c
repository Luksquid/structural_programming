#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
void foo(int** tab,int n)
{
    int m = 100;
    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            *(*(tab + i)+j) = 0;
        }
    }
}
int main()
{
    int** tab = malloc(5*sizeof(int*));
    for(int i=0; i<5; i++)
    {
        *(tab+i) = malloc(100*sizeof(int));
    }
    foo(tab, 5);
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<100; j++)
        {
            printf("[%d, %d] = %d\n", i, j, tab[i][j]);
        }
    }
    return 0;
}
