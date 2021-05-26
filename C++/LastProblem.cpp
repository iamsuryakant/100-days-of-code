//codechef the the Last Probelm

#include <bits/stdc++.h>
#include<algorithm>
#define ll long long

using namespace std;

int x1[1001][1001];

void preC(){
    for(int i = 1; i <= 1000; i++){
        x1[i][1] = i*(i+1)/2;

        for(int j= 2; j<=1000;j++)
            x1[i][j] = x1[i][j-1]+(j-1)+(i-1);
    }
}

/*void printMtrx(){
    for(int i = 1; i<=10; i++)
    {
        for(int j = 1; j<=10; j++)

            cout<<x1[i][j]<<" ";
        cout <<"\n";
    }
}*/

int main(){
   preC();
   //printMtrx();

   int T;
   cin>> T;

   while (T--){

       int r1,c1,r2,c2;
       cin>>r1>>c1>>r2>>c2;

       int  sum = 0, i;

       for(int i= r1; i<= r2; i++)
       {
           sum += x1[i][c1];
       }

       for(int i = c1+1; i<= c2; i++)
       {
           sum += x1[r2][i];
       }

       cout<<sum<<"\n";
   }
   return 0;

}
