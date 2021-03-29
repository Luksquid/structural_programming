#include <stdio.h>
#include <stdlib.h>
float A(int n, int tab[n])
{
    float suma = 0;
    for(int i=0; i<n;i++)
    {
        suma = suma + tab[i];
    }
    float wynik = suma/n;
    return wynik;
}

int B(int n, int tab[n])
{
    int suma = 0;
    for(int i=0; i<n;i++)
    {
        suma = suma + tab[i];
    }
    return suma;
}

int C(int n, int tab[n])
{
    int suma = 0;
    for(int i=0; i<n;i++)
    {
        if(tab[i]!=0)
        {
            suma = suma + (tab[i] * tab[i]);
        }
    }
    return suma;
}

int main()
{
    int n = 6;
    int tab[6] = {2, 4, 5, 5, 7, 8};
    printf("%f\n", A(n, tab));
    printf("%d\n", B(n, tab));
    printf("%d", C(n, tab));
    return 0;
}
