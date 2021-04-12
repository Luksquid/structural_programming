#include <stdio.h>
#include <stdlib.h>
int* foo(int n, int tab1[], int tab2[])
{
    int tb[2*n];
    for(int i=0; i<n; i++)
    {
        tb[i] = tab1[i];
        tb[n+i] = tab2[i];
    }
    for(int i = 0; i<2*n;i++)
    {
        for(int j = 1; j<2*n;j++)
        {
            int temp1 = tb[j];
            int temp0 = tb[j-1];
            if(tb[j]>tb[j-1])
            {
                tb[j] = temp0;
                tb[j-1] = temp1;
            }
        }
    }
    return *tb;
}
int main()
{
    int tab1[2] = {2, 4};
    int tab2[2] = {5, 1};
    printf("%p",foo(2, tab1, tab2));
}
