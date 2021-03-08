#include <stdio.h>
#include <stdlib.h>

int potega(int n, int m)
{
    int wynik = n;
    for(int i = 2; i<=m;i++)
    {
        wynik = wynik * n;
    }
    return wynik;
}
int main()
{
    printf("%d", potega(3, 4));
}
