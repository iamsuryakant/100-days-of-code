#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	long long int  N;

	cin>>N;

	long long int arr[N] ;

	for(int i = 0; i<N; i++){
	    cin>>arr[i];
	}

	long long int Q;

	cin>>Q;

	while(Q--){

	long long int res;
	//long long int sum;
	long long int m,i;

	cin>>m;

	if(m % 2 != 0){

	for(int i =0 ; i<N;i++){

	    res += arr[i];

	}
	}
    else if(m%2==0){

        for(int i =0;i<N;i++){

	        for(int j = i+1; j<N; j++){

	            res += arr[i]^arr[j];

	        }
        }


	}

	cout<<res<<endl;
	//cout<<sum+res<<endl;

	}
	return 0;
}
