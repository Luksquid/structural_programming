#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
struct tr
{
    double a;
    double b;
    double c;
};
void foo(struct tr t1, struct tr *t2)
{
    *t2 = t1;
}
int main()
{
    struct tr t;
    t.a = 2;
    t.b = 6;
    t.c = 8;
    struct tr t2;
    t2.a = 1;
    t2.b = 10;
    t2.c = 7;
    foo(t,&t2);
    return 0;
}
