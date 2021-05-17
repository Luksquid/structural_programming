#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
struct punkt
{
    double x;
    double y;
};
void foo(struct punkt p1[], struct punkt p2[], int n)
{
    for(int i=0; i<n; i++)
    {
        p2[i] = p1[i];
    }
}
int main()
{
    struct punkt punkt1 = {2.3, 4.6};
    struct punkt punkt2 = {4, 9};
    struct punkt punkt3 = {9, 6};
    struct punkt punkt4 = {7, 4};
    struct punkt p1[2] = {punkt1, punkt2};
    struct punkt p2[2] = {punkt3, punkt4};
    foo(p1, p2, 2);
    return 0;
}
