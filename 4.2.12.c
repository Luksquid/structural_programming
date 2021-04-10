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

void fooA(int n, int *tab)
{
    int temp[n];
    for(int i=0; i<n; i++)
    {
        temp[i]=*(tab+i);
    }
    for(int i=0; i<n; i++)
    {
        *(tab+i)=temp[n-i-1];
    }
}

void fooB(int n, int *tab)
{
    int temp[n];
    for(int i=0; i<n; i++)
    {
        temp[i] = *(tab+i);
    }
    for(int i=n-2; i>=0; i--)
    {
        *(tab +i) = temp[i+1];
    }
    *(tab + n-1) = temp[0];
}

void fooC(int n, int *tab)
{
    int temp[n];
    for(int i=0; i<n; i++)
    {
        temp[i] = *(tab+i);
    }
    for(int i=0; i<n; i++)
    {
        *(tab +i+1) = temp[i];
    }
    *(tab) = temp[n-1];
}

void fooD(int n, int *tab)
{
    int temp[n];
    for(int i=0; i<n; i++)
    {
        int m = 0;
        for(int j=n-1; j>=0; j--)
        {
            if(*(tab + i) > *(tab + j))
            {
                m++;
            }
        }
        temp[m] = *(tab+i);
    }
    for(int i=0; i<n; i++)
    {
        *(tab+i) = temp[i];
    }
}

void fooE(int n, int *tab)
{
    int temp[n];
    for(int i=0; i<n; i++)
    {
        int m = 0;
        for(int j=n-1; j>=0; j--)
        {
            if(*(tab + i) < *(tab + j))
            {
                m++;
            }
        }
        temp[m] = *(tab+i);
    }
    for(int i=0; i<n; i++)
    {
        *(tab+i) = temp[i];
    }
}

int main()
{
    const int n = 6;
    int *tab = malloc(4 * sizeof(int));
    *(tab) = 5;
    *(tab + 1) = 2;
    *(tab + 2) = 9;
    *(tab + 3) = 4;
    *(tab + 4) = 7;
    *(tab + 5) = 1;
    show(n, tab);
    //fooA(n, tab);
    //fooB(n, tab);
    //fooC(n, tab);
    //fooD(n, tab);
    fooE(n, tab);
    show(n, tab);
}
