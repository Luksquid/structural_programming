#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, wyn=0;
    printf("Liczby:\n");
    scanf("%i %i", &n, &m);
    for(int i = 1; i<=m; i++)
    {
        wyn = wyn + n;
        printf("%i\n", wyn);
    }
}
