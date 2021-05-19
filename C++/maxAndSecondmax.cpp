// { Driver Code Starts
//Initial Template for C++

// CPP code to find largest and
// second largest element in the array


//Solution Created by Suryakant Thakur

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int n, int arr[])
    {
        int max = INT_MIN, max2 = INT_MIN;

        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
        vector<int> v;
        //  v.push_back(max);
        //v.push_back(max2);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max2 = max;
                max = arr[i];
                // v.push_back(max);
            }
            else if (arr[i] > max2 && arr[i] < max)
            {
                max2 = arr[i];
                //v.push_back(max2);
            }
        }

        if (max2 == INT_MIN)
        {
            max2 = -1;
            //v.push_back(max2);
        }
        if (max == INT_MIN)
        {
            max = -1;
            //v.push_back(max);
        }
        v.push_back(max);
        v.push_back(max2);
        return v;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{

    // Testcase input
    int testcases;
    cin >> testcases;

    // Looping through all testcases
    while (testcases--)
    {
        int sizeOfArray;
        cin >> sizeOfArray;

        int arr[sizeOfArray];

        // Array input
        for (int index = 0; index < sizeOfArray; index++)
        {
            cin >> arr[index];
        }
        Solution obj;
        vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
        cout << ans[0] << ' ' << ans[1] << endl;
    }
  //  g2 = make_pair(1, 'a');
    return 0;
} // } Driver Code Ends