#include<bits/stdc++.h>

using namespace std;

template<typename T>

T arrMax(T arr[], int n)
{
    T res = arr[0];

    for(int i = 1; i<n; i++)
    {
        if(arr[i] > res)
        {
            res = arr[i];
        }
    }
    return res;
}

int main()
{
    int arr[] = {3,5,6,2,1,9};
    cout<<arrMax<int> (arr, 6)<<endl;

    float arr1[] = {3.5,4.9,3.2,1.2};
    cout<<arrMax<float> (arr1, 5);
}