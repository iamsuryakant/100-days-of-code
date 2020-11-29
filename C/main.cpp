#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

void fun(int n)
{
	if(n>0)
	{
		cout<<" "<< n;
		
		fun(n-1);
		
		fun(n-1);
	}
}

int main()
{
	int x= 3;
	
	fun(x);
}

