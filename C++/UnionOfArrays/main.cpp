#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


//arr1,arr2 : the arrays
// n, m: size of arrays
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    //Your code here
    //return vector with correct order of elements
    int i=0,j=0;

    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i++]<<" ";
        }
        else if(arr2[j]<arr1[i])
        {
            cout<<arr2[j++]<<" ";
        }
        else
            cout<<arr2[j++]<<" ";
            i++;
    }

    while(i<n)
        cout<<arr1[i++]<<" ";
    while(j<m)
        cout<<arr2[j++]<<" ";
}

// { Driver Code Starts.

int main() {

	int T;
	cin >> T;

	while(T--){



	    int N, M;
	    cin >>N >> M;

	    int arr1[N];
	    int arr2[M];

	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }

	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }

	    vector<int> ans = findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;

	}

	return 0;
}  // } Driver Code Ends
