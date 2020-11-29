#include <stdio.h>
#include <stdlib.h>
int fun(int n)
{
    if(n>100)
        return n-10;
    else
        return fun(fun(n+11));
}
int main()
{
    int x;
    x=fun(95);
    printf("%d ",x);
    return 0;
}
