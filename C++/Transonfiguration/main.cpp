// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution{

    public:
    int transfigure (string A, string B)
    {
    	// Your code goes here

    	if(A.size() != B.size())
    	    return -1;

    	int c[256];

    	for(int i=0;i<256;i++)
    	    c[i]=0;
    	for(int i=0;i<A.size();i++)
    	    c[A[i]]++;
    	for(int i=0;i<B.size();i++)
    	    c[B[i]]--;
    	for(int i =0;i<256;i++)
    	    if(c[i] != 0)
    	        return -1;


        int i = A.size() -1;
        int j = B.size() -1;
        int r = 0;

        while(i>=0 && j>=0)
        {
            while (i >= 0 and A[i] != B[j])
    		{
    			i--;
    			r++;
    		}

    		i--;
    		j--;
    	}

    	return r;
    }
};

// { Driver Code Starts.


int main ()
{
    int t; cin >> t;
    while (t--)
    {
        string A, B;
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  // } Driver Code Ends
