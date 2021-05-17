#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
struct trojkat
{
    double a;
    double b;
    double c;
};
double foo(struct trojkat t)
{
    return t.a + t.b + t.c;
}
int main()
{
    struct trojkat t;
    t.a = 2;
    t.b = 6;
    t.c = 8;
    printf("%lf", foo(t));
    return 0;
}
