#include <stdio.h>
#include <stdlib.h>
int i=0;
void a()
{  
    i++;
    printf("%d", i);
}
int main()
{
    int i = 0;
    a(i);
    return 0;
}
