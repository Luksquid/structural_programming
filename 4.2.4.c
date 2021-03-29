#include <stdio.h>
#include <stdlib.h>
float foo(int n, int tab[])
{
    float temp = 1;
    for(int i=0; i<n;i++)
    {
        temp = temp * tab[i];
    }
    return sqrt(temp);
}

int main()
{
    int n = 6;
    int tab[6] = {2, 4, 5, 5, 7, 8};
    printf("%f\n", foo(n, tab));
    return 0;
}
