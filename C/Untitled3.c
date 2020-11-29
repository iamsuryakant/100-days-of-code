#include<stdio.h>

int f(int n)

{

static int i = 1;

if (n>=5)
	return n;

n = n+i;
i++;
return f(n);

}
int main()
{
	int x = 1;
	
	x = f(x);
	
	printf("%d",x);
	return 0;
}
