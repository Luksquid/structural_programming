#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
struct punkt
{
    double tab[10];
};
void foo(struct punkt t1[], struct punkt t2[], int n)
{
    for(int i=0; i<n; i++)
    {
        t2[i] = t1[i];
    }
}
int main()
{
    double tab1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double tab2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    struct punkt p1;
    struct punkt p2;
    for (int i = 0; i<10; i++)
    {
        p1.tab[i] = tab1[i];
        p2.tab[i] = tab2[i];
    }
    struct punkt t1[] = {p1};
    struct punkt t2[] = {p2};
    foo(t1, t2, 1);
    return 0;
}
