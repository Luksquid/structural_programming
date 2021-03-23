#include <stdio.h>
#include <stdlib.h>
int wsk11(int n)
{
    return n;
}
int wsk22(int n)
{
    return n;
}
int foo(unsigned int n ,int (*wsk1)(int arg1), int (*wsk2)(int arg2))
{
    for(int i = 0; i<=n;i++)
    {
        if(wsk1(i) != wsk2(i))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    printf("%d", foo(2, &wsk11, &wsk22));
}
