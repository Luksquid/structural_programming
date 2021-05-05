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
void wys2(wchar_t *nap)
{
    int temp = 0;
    while(nap[temp]!=0)
    {
        wprintf(L"%c", nap[temp]);
        temp++;
    }
}
int ile(char *nap)
{
    int temp = 0;
    while(*(nap++))
    {
        temp++;
    }
    return temp;
}
int ile2(wchar_t *nap)
{
    int temp = 0;
    while(*(nap++))
    {
        temp++;
    }
    return temp;
}
char *sklej(char *nap1, char *nap2, char *nap3)
{
    int i1 = ile(&*nap1);
    int i2 = ile(&*nap2);
    int i3 = ile(&*nap3);
    char * napw = malloc((i3+i2+i1) * sizeof(char));
    int t = 0;
    for(int i=0; *(nap1+i)!=0; i++)
    {
        *(napw + t) = *(nap1+i);
        t++;
    }
    for(int i=0; *(nap2+i)!=0; i++)
    {
        *(napw + t) = *(nap2+i);
        t++;
    }
    for(int i=0; *(nap3+i)!=0; i++)
    {
        *(napw + t) = *(nap3+i);
        t++;
    }
    napw[t]='\0';
    return napw;
}
wchar_t *sklej2(wchar_t *nap1, wchar_t *nap2, wchar_t *nap3)
{
    int i1 = ile(&*nap1);
    int i2 = ile(&*nap2);
    int i3 = ile(&*nap3);
    wchar_t * napw = malloc((i3+i2+i1) * sizeof(wchar_t));
    int t = 0;
    for(int i=0; *(nap1+i)!=0; i++)
    {
        *(napw + t) = *(nap1+i);
        t++;
    }
    for(int i=0; *(nap2+i)!=0; i++)
    {
        *(napw + t) = *(nap2+i);
        t++;
    }
    for(int i=0; *(nap3+i)!=0; i++)
    {
        *(napw + t) = *(nap3+i);
        t++;
    }
    napw[t]='\0';
    return napw;
}
int main()
{
    char nap1[] = "Ala ";
    char nap2[] = "ma ";
    char nap3[] = "kota";
    char * wyn = (sklej(&nap1, &nap2, &nap3));
    wys(wyn);
    printf("\n");
    wchar_t nap4[] = L"Ala ";
    wchar_t nap5[] = L"ma ";
    wchar_t nap6[] = L"kota";
    wchar_t * wyn2 = (sklej2(&nap4, &nap5, &nap6));
    wys2(wyn2);

    return 0;
}
