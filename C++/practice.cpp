#include <iostream>
using namespace std;
#define ll long long 
class rectangle{

private:
	int length;
	int breadth;
	
public:
	void setLength(int l)
	{
		if(l >= 0)
		{
			length = l;
		}
		else{
			length = 0;
		}
	}

	void setBreadth(int b)
	{
		if(b>=0)
		{
			breadth = b;
		}
		else{
			breadth = 0;
		}
	}

	int getLength()
	{
		return length;
	}
	
	int getBreadth(){
		return breadth;
	}


	int area(){
		return length*breadth;
	}
};

int main() {
	// your code goes here
	// rectangle r;
	rectangle r1;
	r1.setLength(10);
	r1.setBreadth(20);
	// r1.length = 10, r1.breadth = 20;
	cout <<r1.area()<< endl;
	cout<<r1.getLength();
	return 0;
}