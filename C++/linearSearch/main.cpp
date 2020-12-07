#include <iostream>

using namespace std;

int main()
{
    int A[10];
    int n,key;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the key: ";
    cin>>key;

    for(int i=0;i<n;i++)
    {
        if(key == A[i])
        {
            cout<<"Key found at: "<<i;
            return 0;
        }
    }
    cout<<"Key not found";

    return 0;
}
