#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, silnia = 1;
    scanf("%i", &n);
    for(int i = 1; i<=n;i++)
    {
        silnia = silnia * i;
    }
    printf("Silnia z %d to %d", n, silnia);
}
