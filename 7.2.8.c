#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
struct student
{
    char imie[10];
    char nazwisko[20];
    char adres[20];
    char pesel[9];
    char kierunek[20];
    char nrlegitymacji[6];
};
void foo(struct student * st)
{
    scanf("%s", &st->imie);
    scanf("%s", &st->nazwisko);
    scanf("%s", &st->adres);
    scanf("%s", &st->pesel);
    scanf("%s", &st->kierunek);
    scanf("%s", &st->nrlegitymacji);
}
int main()
{
    struct student st;
    foo(&st);
    return 0;
}
