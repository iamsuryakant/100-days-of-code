#include <iostream>
#include<string>
#include<vector>


using namespace std;

int main()
{
    //int s3;
   string s1,s2,s3;
   s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   //cout<<"Before conversion: "<<s1<<endl;
   getline(cin,s2);
   int l = s2.length();
   //cout<<l;
   for(int i = 0; i<l; i++)
   {
       //int s3;
       s3 = s1[90 - s2[i]];
       cout<<s3;
   }
   //cout<<s3;


   return 0;
}
