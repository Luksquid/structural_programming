#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
int *** foo(int n, int m, int l)
{
    int *** tab = malloc(n * sizeof(int**));
    for(int i=0; i<n; i++)
    {
        *(tab + i) = malloc(m * sizeof(int*));
        for(int j=0; j<m; j++)
        {
            *(*(tab+i)+j) = malloc(l*sizeof(int));
        }
    }
    return tab;
}
void foo2(int n, int m, int l, int*** tab)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            free(*(*(tab+i)+j));
        }
    }
    free(tab);
}
int main()
{
    int *** tab = foo(5, 4, 3);
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            for(int k=0; k<3; k++)
            {
                *(*(*(tab + i) + j) + k) = i + j + k;
                printf("[%d, %d, %d] = %d\n", i, j, k, tab[i][j][k]);

            }
        }
    }
    foo2(5, 4, 3, tab);
    printf("%p", &tab);
    return 0;
}
