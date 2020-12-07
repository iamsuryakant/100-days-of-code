#include <iostream>

using namespace std;

int main()
{
    int A[10] = {2,3,5,6,7,8,9,4,1,1};
    int arrSum = 0;

    for(int i=0; i<10;i++)
    {
        arrSum = arrSum + A[i];

    }
    cout<<arrSum;

    return 0;
}
