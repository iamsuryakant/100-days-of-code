#include<bits/stdc++.h>
using namespace std;

int insertElt(int arr[], int n, int key, int capacity)
{
	if (n >= capacity)
		return n;
	arr[n] = key;
	return (n+1);
}

int main(){
	
	int arr[20] = {4,6,8,7,9,3};
	int capacity = sizeof(arr)/sizeof(arr[0]);
	
	int n = 6;
	
	int i, key= 8;
	
	cout<< "Before insertion: ";
	
	n = insertElt(arr,n,key, capacity);
	
	cout<< "After insertion: ";
	
	for(i=0 ; i<n; i++)
	{
		cout<< arr[i] << " ";
	}
	
	return 0;
}
