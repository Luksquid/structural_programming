#include <stdio.h>
#include <stdlib.h>

int foo(char *nap1, char *nap2)
{
    for(int i=0; nap1[i]!=0 && nap2[i]!=0; i++)
    {
        if(nap1[i] < nap2[i])
        {
            return 1;
        }
        else if(nap2[i] < nap1[i])
        {
            return 0;
        }
    }
}
int main()
{
    char nap1[] = "abcd";
    char nap2[] = "bbca";
    printf("%d", foo(&nap1, &nap2));
    return 0;
}
