// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++

//Back-end complete function Template for C++

class Solution{

    private:
    int digitSum(int n)
    {
    	int sum = 0;
    	while (n) {
    		sum += (n % 10);
    		n /= 10;
    	}
    	return sum;
    }

    public:
    int RulingPair(vector<int> arr, int n)
    {
    	// Your code goes here
    	unordered_map<int, int> m;
    	int res = -1;

    	for (int i = 0; i < n; i++) {
    		int dSum = digitSum(arr[i]);

    		if (m[dSum] != 0) {
    			res = max(res, m[dSum] + arr[i]);
    		}
    		m[dSum] = max(m[dSum], arr[i]);
    	}
    	return res;
    }
};


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> arr(n);
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
	    Solution obj;
		cout << obj.RulingPair(arr,n)<<"\n";
	}
	return 0;
}

  // } Driver Code Ends
