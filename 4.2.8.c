#include <stdio.h>
#include <stdlib.h>
void show(int n, int * tab)
{
    for(int i = 0; i<n; i++)
    {
        printf("%d ", *(tab + i));
    }
    printf("\n");
}

void fooA(int n, int *tab1, int *tab2, int *tab3)
{
    for(int i=0; i<n; i++)
    {
        *(tab3 + i) = *(tab1 + i);
        *(tab3 + i +  n) = *(tab2 + i);
    }
}
void fooB(int n, int *tab1, int *tab2, int *tab3)
{
    int p = 0;
    int np = 0;
    for(int i=0; i<n*2; i++)
    {
        if(i%2==0)
        {
            *(tab3 + i) = *(tab2 + p);
            p++;
        }
        else if(i%2==1)
        {
            *(tab3 + i) = *(tab1 + np);
            np++;
        }

    }
}
int main()
{
    int *tab1 = malloc(2 * sizeof(int));
    int *tab2 = malloc(2 * sizeof(int));
    int *tab3 = malloc(4 * sizeof(int));
    *(tab1) = 5;
    *(tab1 + 1) = 2;
    *(tab2) = 3;
    *(tab2 + 1) = 1;
    //fooA(2, tab1, tab2, tab3);
    fooB(2, tab1, tab2, tab3);
    show(2, tab1);
    show(2, tab2);
    show(4, tab3);
}
