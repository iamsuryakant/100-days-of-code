#include<iostream>
using namespace std;
void leftrotatebyone(int arr[],int n)
{
	int temp=arr[0],i;
	for(i=0;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[i]=temp;
}
void leftrotate(int arr[], int d, int n)
{
	int i;
	for(i=0;i<d;i++)
	{
		leftrotatebyone(arr,n);
	}
}
void printarray(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
 int main()
 {
 	int arr[]={0,1,2,3,4,5,6,7,8};
 	int n=sizeof(arr)/sizeof(arr[0]);
 	leftrotate(arr,2,n);
 	printarray(arr,n);
 }
