#include<stdio.h>
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
}
