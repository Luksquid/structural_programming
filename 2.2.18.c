#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void ps(int f)
{
    int a = rand()%2;
    printf("%d\n", a);
    for(int i = 0; i <10; i++)
    {
        a = 1 - (a*a);
        printf("%d\n",a);
    }
}
int main()
{
    srand(time(NULL));
    ps(10);
}
