#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, wyn=0; int wyb;
    printf("1.Dodawanie\n2.Odejmowanie\n3.Mnozenie\n4.Dzzielenie\n");
    scanf("%i", &wyb);
    printf("Liczby:\n");
    scanf("%f %f", &a, &b);
    switch(wyb)
    {
    case 1:
        wyn = a+b;
        printf("%f", wyn);
        break;
    case 2:
        wyn = a-b;
        printf("%f", wyn);
        break;
    case 3:
        wyn = a*b;
        printf("%f", wyn);
        break;
    case 4:
        wyn = a/b;
        printf("%f", wyn);
        break;
    }
}
