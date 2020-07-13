//This is for testing...Not for use..it may have some error.
#include<stdio.h>
int main()
{
	int i,j,k=5;
	
	for(i=k;i>0;i--)
	{
		for(j=k;j>i;j--)
		{
			printf("%d ",j);
		}
		for(j=0;j<2*i-1;j++)
		{
			printf("%d ",i);
		}
		for(j=i;j<k;j++)
		{
			printf("%d ",j+1);
		}
		printf("\n");
	}
	for(i=0;i<k;i++)
	{
		for(j=k;j>i+1;j--)
		{
			printf("%d ",j);
		}
		for(j=0;j<2*i-1;j++)
		{
			printf("%d ",i+1);
		}
		for(j=i+1;j<k;j++)
		{
			printf("%d ",j+1);
		}
		printf("%d ",j+1);
	}
	return 0;
}
