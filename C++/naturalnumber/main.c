#include <stdio.h>
#include <stdlib.h>
int sum(int n)
{
    if(n==0)
        return 0;
    return sum(n-1)+ n;
}
int Sum(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    return s;
}
int main()
{
    int r;
    r = Sum(5);
    printf("%d ",r);
    return 0;
}
