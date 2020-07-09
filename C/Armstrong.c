#include<stdio.h>
int main()
{
	int number, result=0, count=0,c,mul=1,rem;
	printf("enter the number: ");
	scanf("%d",&number);
	
	int q=number;
	while(q != 0)
	{
		q=q/10;
		count++;
	}
	c=count;
	q=number;
	while(q != 0)
	{
		rem=q%10;
		while(c != 0)
		{
			mul=mul*rem;
			c--;
		}
		result=result+mul;
		c=count;
		q=q/10;
		mul=1;
	}
	if(result==number)
	{
		printf("%d is Armstrong number",number);
	}
	else{
		printf("%d is not Armstrong number",number);
	}
	return 0;
}
