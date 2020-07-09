#include<stdio.h>
int main()
{
	int i,n,q,result=0,fact=1,rem;
	printf("enter the number: ");
	scanf("%d",&n);
	q=n;
	while(q != 0)
	{
		rem=q%10;
		for(i=1 ; i <= rem;i++)
		{
			fact = fact*i;
		}
		result=result+fact;
		fact = 1;
		q = q/10;
		
	}
	if(result==n)
	{
		printf("%d is strong number",n);
	}
	else{
		printf("%d is not strong number",n);
	}
	return 0;
}
