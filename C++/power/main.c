#include <stdio.h>
#include <stdlib.h>
int pow(int m, int n)
{
    if(n==0)
        return 1;
    return pow(m,n-1)*m;
}
int main()
{
    int r;
    r= pow(2,9);
    printf("%d",r);
    return 0;
}
