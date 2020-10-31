#include<stdio.h>
int add(int a, int b)
{
	int c;
	c= a+b;
	return(c);
}

int main()
{
	int x,y,z;
	x= 50, y= 40;
	z= add(x,y);
	
	printf("The sum is %d", z);
}
