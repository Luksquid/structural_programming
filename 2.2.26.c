#include <stdio.h>
#include <stdlib.h>
int foo(int n)
{
    int wynik = 0;
    for(int i=0; i<=n;i++)
    {
        if(n==0 || n==1 || n==2)
        {
            return 1;
        }
        if(i%3==0)
        {
            wynik = foo(n-1) + foo(n-2);
        }
        else if(i%3==1)
        {
            wynik = ((5 * foo(n-1)) + 4);
        }
        else if(i%3==2)
        {
            wynik = foo(n-1);
        }
    }
    return wynik;
}
int main()
{
    printf("%d", foo(6));
}
