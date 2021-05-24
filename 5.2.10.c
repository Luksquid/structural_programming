#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
void foo(char *nap1, char *nap2)
{
    int t = 0;
    int z = 0;
    int t2 = 0;
    while(nap1[t]!=0)
    {
        if(nap1[t] != nap2[z])
        {
            t2++;
        }
        else
        {
            z++;
        }
        t++;
    }
    char * temp = malloc((1+t2)*sizeof(char));
    temp[t2+1]='\0';
    t = 0;
    z = 0;
    t2 = 0;
    while(nap1[t]!=0)
    {
        if(nap1[t] != nap2[z])
        {
            temp[t2] = nap1[t];
            t2++;
        }
        else
        {
            z++;
        }
        t++;
    }
    t=0;
    while(temp[t]!=0)
    {
        nap1[t] = temp[t];
        t++;
    }
    nap1[t-1]='\0';
}
void foo2(wchar_t *nap1, wchar_t *nap2)
{
    int t = 0;
    int z = 0;
    int t2 = 0;
    while(nap1[t]!=0)
    {
        if(nap1[t] != nap2[z])
        {
            t2++;
        }
        else
        {
            z++;
        }
        t++;
    }
    wchar_t * temp = malloc((1+t2)*sizeof(wchar_t));
    temp[t2+1]='\0';
    t = 0;
    z = 0;
    t2 = 0;
    while(nap1[t]!=0)
    {
        if(nap1[t] != nap2[z])
        {
            temp[t2] = nap1[t];
            t2++;
        }
        else
        {
            z++;
        }
        t++;
    }
    t=0;
    while(temp[t]!=0)
    {
        nap1[t] = temp[t];
        t++;
    }
    nap1[t]='\0';
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
    char nap2[] = "kota";
    wchar_t nap3[] = L"Ala ma kota";
    wchar_t nap4[] = L"Alama";
    foo(&nap1, &nap2);
    foo2(&nap3, &nap4);
    wys(nap1);
    printf("\n");
    wys2(nap3);
    return 0;
}
