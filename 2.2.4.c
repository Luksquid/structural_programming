#include <stdio.h>
#include <stdlib.h>

int potega(int n)
{
    int wynik = 2;
    for(int i = 2; i<=n;i++)
    {
        wynik = wynik * 2;
    }
    return wynik;
}
int main()
{
    printf("%d", potega(5));
}
