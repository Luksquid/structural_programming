#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, wyn=1;
    scanf("%i", &a);
    for(int i = 2; i<=a; i=i+2)
    {
        wyn = wyn * i;
    }
    printf("%i", wyn);
}
