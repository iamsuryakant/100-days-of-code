# include<iostream>
using namespace std;

/*program for finding user name from email address

*/
int main()
{
	string email="suryakantthakur825@gmail.com";
	int i=(int)email.find('@');
	string uname=email.substr(0,i);
	cout<<"user name is "<<uname<<endl;
	return 0;
}
