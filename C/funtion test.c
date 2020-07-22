/*#include<stdio.h>
int areaofrect(int length, int breadth)
{
	int area;
	area=length*breadth;
	return area;
}
int main(){

	int l,b;
	printf("enter the value of lenght and breadth:");
	scanf("%d %d",&l,&b);
	int area= areaofrect(l,b);
	printf("%d",area);
}*/
#include<stdio.h>
int add(int , int);
int main()
{
	int m=30,n=60,sum;
	sum=add(m,n);
	printf("sum is:%d", sum);
}
int add(int a, int b)
{
	return(a+b);
}

