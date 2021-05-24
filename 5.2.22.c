#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <string.h>

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
    while(nap[temp]!='\0')
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
    int i1 = ile(nap1);
    int i2 = ile(nap2);
    int i3 = ile(nap3);
    char * wyn = malloc((i3+i2+i1+1) * sizeof(char));
    wyn[0]='\0';
    strcat(wyn, nap1);
    strcat(wyn, nap2);
    strcat(wyn, nap3);
    return wyn;
}

char *sklej2(wchar_t *nap1, wchar_t *nap2, wchar_t *nap3)
{
    int i1 = ile2(nap1);
    int i2 = ile2(nap2);
    int i3 = ile2(nap3);
    wchar_t * wyn = malloc((i3+i2+i1+1) * sizeof(wchar_t));
    wyn[0]='\0';
    wcscat(wyn, nap1);
    wcscat(wyn, nap2);
    wcscat(wyn, nap3);
    return wyn;
}
int main()
{
    char nap1[] = "Ala ";
    char nap2[] = "ma ";
    char nap3[] = "kota";
    char * wyn = (sklej(&nap1, &nap2, &nap3));
    wys(wyn);
    printf("\n");
    wchar_t nap4[] = L"U";
    wchar_t nap5[] = L"W";
    wchar_t nap6[] = L"M";
    wchar_t * wyn2 = (sklej2(&nap4, &nap5, &nap6));
    wys2(wyn2);

    return 0;
}
