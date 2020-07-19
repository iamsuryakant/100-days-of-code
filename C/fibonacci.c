#include<stdio.h>
int main()
{
	int a=0, b=1,i,n,result;
	printf("enter the number of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		result=a+b;
		a=b;
		b=result;
		
	}
	printf("\nThe fibonacci series is %d ",result);
	return 0;
	
}
