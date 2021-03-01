#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, wyn=0;
    printf("Liczby:\n");
    scanf("%i %i", &a, &b);
    for(int i = 1; i<=b; i++)
    {
        wyn = wyn + a;
    }
    printf("%i", wyn);
}
