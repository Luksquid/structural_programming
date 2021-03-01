#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int wyb; float a, b, c, h; float p, wyn;
    printf("Oblicz pole trojkata za pomoca:\n1.Bokow: a,b,c\n2.Podstawy i wysokosci\n");
    scanf("%i", &wyb);
    switch(wyb)
    {
    case 1:
        scanf("%f %f %f", &a, &b, &c);
        p = (a+b+c)/2;
        wyn = sqrt(p*(p-a)*(p-b)*(p-c));
        break;
    case 2:
        scanf("%f %f", &a, &h);
        wyn = 0.5 *a*h;
        break;
    }
    printf("%f", wyn);
}
