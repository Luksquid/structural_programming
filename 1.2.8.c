#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    float x = a, y = b, z = c;
    float d = (x+y+z)/3;
    printf("%f",d);
    return 0;
}
