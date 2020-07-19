#include<stdio.h>
int main()
{
	int sum,carry,a,b;
	printf("Enter the number:");
	scanf("%d %d",&a,&b);
	while(b!=0)
	{
		sum=a^b;
		carry=(a&b)<<1;
		
		a=sum;
		b=carry;
	}
	printf("The sum of two number is %d",a);
	return 0;
}
