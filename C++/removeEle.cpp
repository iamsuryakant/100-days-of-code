#include<bits/stdc++.h>

using namespace std;

int removeElement(vector<int> &nums, int val)
{

    vector<int>::iterator it;
    vector<int>::iterator it1;

    it = remove(nums.begin(), nums.end(), val);

    for (it1 = nums.begin(); it1 != it; ++it1)
    {
        return *it1;
    }
    return 0;
}

int main(){


    vector<int> v = {0,1,2,2,3,0,4,2};

    removeElement(v,2);

    for(int i = 0; i<v.size(); i++)
    {
        cout <<v[i]<<" ";
    }
}
