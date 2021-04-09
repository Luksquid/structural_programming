#include <stdio.h>
#include <stdlib.h>

double foo(int n, double * tab1, double * tab2)
{
    double wynik = 0;
    for(int i=0; i<n; i++)
    {
        wynik = wynik + (*(tab1 + i) * *(tab2 + i));
    }
    return wynik;
}

int main()
{
    double *tab1 = malloc(2 * sizeof(double));
    double *tab2 = malloc(2 * sizeof(double));
    *(tab1) = 5;
    *(tab1 + 1) = 2;
    *(tab1 + 2) = 4;
    *(tab2) = 3;
    *(tab2 + 1) = 1;
    *(tab2 + 2) = 7;
    printf("%lf", foo(3, tab1, tab2));
}
