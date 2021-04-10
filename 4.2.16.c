#include <stdio.h>
#include <stdlib.h>

void show(int n, double * tab)
{
    for(int i = 0; i<n; i++)
    {
        printf("%lf ", *(tab + i));
    }
    printf("\n");
}

void foo(double * tab)
{
    free(tab);
}
int main()
{
    const int n = 6;
    double *tab = malloc(n * sizeof(double));
    *(tab) = 5;
    *(tab + 1) = 2;
    *(tab + 2) = 9;
    *(tab + 3) = 4;
    *(tab + 4) = 7;
    *(tab + 5) = 1;
    foo(tab);
    show(n, tab);
}
