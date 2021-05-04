#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
void wys(char *nap)
{
    int temp = 0;
    while(nap[temp]!=0)
    {
        printf("%c", nap[temp]);
        temp++;
    }
}
void foo(int n, char *nap1, char *nap2)
{
    for(int i=0; i<n && *nap1!=0; i++)
    {
        nap2[i] = nap1[i];
    }
    nap2[n]='\0';
}
void wys2(wchar_t *nap)
{
    int temp = 0;
    while(nap[temp]!=0)
    {
        wprintf(L"%c", nap[temp]);
        temp++;
    }
}
void foo2(int n, wchar_t *nap1, wchar_t *nap2)
{
    for(int i=0; i<n && *nap1!=0; i++)
    {
        nap2[i] = nap1[i];
    }
    nap2[n]='\0';
}
int main()
{
    char nap1[] = "lama";
    char nap2[] = "bbca";
    wchar_t nap3[] = L"lama";
    wchar_t nap4[] = L"bbca";
    foo(4,&nap1, &nap2);
    wys(&nap2);
    foo2(4,&nap3,&nap4);
    wys2(&nap4);
    return 0;
}
