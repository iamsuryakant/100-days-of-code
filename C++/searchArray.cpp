#include<bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n, int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if (arr[i]==key){
			return i;
		}
	}
	return -1;
}

int main()
{
	int arr[] = {3,4,5,6,78,90};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 5;
	int position = findElement(arr,n,key);
	
	if(position== -1)
	{
		cout<< "Element not found";
	}
	else{
		cout << "Element found at position: "
			<< position+1;
	}
	
	return 0;
}
