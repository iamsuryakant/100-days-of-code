#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {34,67,21,9,8,76};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n);

    for(int i = 0;i<n; i++)
        cout<<arr[i]<<" "<<endl;

    if(binary_search(arr, arr+n, 25))
    {
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not Present"<<endl;
    }
   // cout << "Hello world!" << endl;
    return 0;
}
