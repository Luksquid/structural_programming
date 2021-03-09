#include <stdio.h>
#include <stdlib.h>

int wp(int i, int n)
{
    for(int j =1; j<=i; j++)
    {
        if((i%j==0) && (n%j==0) && j != 1)
        {
            return 0;
        }
    }
    return 1;
}
int suma(int n)
{
    int wynik =0;
    for(int i = 1; i<n; i++)
    {
        if(wp(i, n)==1)
        {
            wynik = wynik + i;
        }
    }
    return wynik;
}
int main()
{
    printf("%d",suma(6));
}
