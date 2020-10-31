#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x , y;
	x = 10 , y = 20;
	
	swap(&x,&y);
	
	printf("%d %d",x,y);
}
