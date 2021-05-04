#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
void foo(char *nap1, char *nap2)
{
    int flaga = 0;
    for(int i=0; nap1[i]!=0; i++)
    {
        flaga = 0;
        for(int j=0; nap2[j]!=0; j++)
        {
            if(nap1[i]==nap2[j])
            {
                flaga = 1;
            }
        }
        if(flaga==0)
            nap1[i]=' ';
    }
}
void foo2(wchar_t *nap1, wchar_t *nap2)
{
    int flaga = 0;
    for(int i=0; nap1[i]!=0; i++)
    {
        flaga = 0;
        for(int j=0; nap2[j]!=0; j++)
        {
            if(nap1[i]==nap2[j])
            {
                flaga = 1;
            }
        }
        if(flaga==0)
            nap1[i]=' ';
    }
}
void wys(char *nap)
{
    int temp = 0;
    while(nap[temp]!=0)
    {
        printf("%c", nap[temp]);
        temp++;
    }
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
int main()
{
    char nap1[] = "Ala ma kota";
    char nap2[] = "ma";
    wchar_t nap3[] = L"Ala ma kota";
    wchar_t nap4[] = L"ko";
    foo(&nap1, &nap2);
    wys(&nap1);
    printf("\n");
    foo2(&nap3, &nap4);
    wys2(&nap3);
    return 0;
}
