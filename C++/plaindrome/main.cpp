#include <iostream>
#include<string>
using namespace std;

bool ispal(string &s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    return (rev == s);
}
int main()
{
    //cout << "Hello world!" << endl;
    string s = "cooc"
    if(ispal(s))
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
