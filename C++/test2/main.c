#include <stdio.h>
#include <stdlib.h>
int fun (int n)

{

int x=1, k;

if (n==1)
    return x;

for (k=1; k<n; ++k)

    x = x+fun(k)*fun(n-k);

    return x;

}
int main()
{
    int r=5;
   r=fun(5);
    printf("%d",r);
    return 0;
}
