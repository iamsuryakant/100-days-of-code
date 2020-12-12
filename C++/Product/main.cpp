#include <iostream>
#include<string.h>
#include<math.h>

using namespace std;

int product(int arr[], int num)
{
		for(int i =0;i<num;i++)
	{
		int answer = 1;
		answer = (answer * i)/(pow(10,9)+7);
		return answer;
	}
}

int main() {
	int num;
	int arr[num];
	cin >> num;

	for(int i=1;i<num;i++)
	{
		cin>>arr[i];
	}

	cout<<product(arr,num);
	return 0;




}
