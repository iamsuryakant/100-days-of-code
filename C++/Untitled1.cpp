#include<bits/stdc++.h>
using namespace std;

void rotateLeftbyOne(int arr[], int n)
{
	int temp = arr[0],i;
	for(i=0;i<n-1;i++)
	{
		arr[i] = arr[i+1];
	}
	arr[i]= temp;
}

void leftRotate(int arr[],int d, int n){
	
	for(int i =0; i<d; i++){
		rotateLeftbyOne(arr,n);
	}
}
void printArray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int len = sizeof(arr)/sizeof(arr[0]);
	
	leftRotate(arr,1,len);
	printArray(arr,len);
	
	return 0;
	
}
