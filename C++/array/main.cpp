#include <iostream>

using namespace std;

int main()
{
    int A[5] ={2,5,8,9,1};

    //for(int i=0; i<5;i++)
    for(int i : A)
    {
        //cout<<A[i]<<endl;
        cout<<i<<endl;
    }
    return 0;
}
