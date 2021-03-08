#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int foo(int n)
{
    int wynik = 0;
    if(n==0 || n==1)
    {
        return 1;
    }
    for(int i = 2; i<=n;i++)
    {
       wynik = foo(i-1) + 2*foo(i-2) + 3;
    }
    return wynik;
}
int main()
{
    printf("%d", foo(3));
}
