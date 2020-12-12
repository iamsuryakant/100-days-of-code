#include <iostream>
#include<string.h>
using namespace std;

void palindrome(char str[])
{
	int l = 0;
	int h = strlen(str)-1;
	while(h > l)
	{
		if(str[l++] != str[h--])
		{
			cout<<"NO"<<endl;
			return;
		}

	}
	cout<<"YES"<<endl;
}

int main() {
	char s[100];
	cin>>s;
	palindrome(s);
	return 0;


}

