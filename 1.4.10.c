#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, wyn=1;
    scanf("%i", &a);
    for(int i = 1; i<a; i++)
    {
        if(i*i<=a)
        {
            wyn=i;
        }

    }
    printf("%i", wyn);
}
