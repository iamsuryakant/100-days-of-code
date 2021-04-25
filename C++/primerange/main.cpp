#include <iostream>
#include<stack>

using namespace std;

int main()
{

    int N, M;
    cin>>N>>M;
    int i = 2;

    while(N < M)
    {
        while(i<N)
        {
            if(N%i==0){
                break;
            }

            if(N==i)
            {
                cout<<N;
            }
            i++;

        }
        N++;



    }
    return 0;

}
