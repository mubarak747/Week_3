#include <bits/stdc++.h>
using namespace std;

//single
class A{
	public:
		A()
		{
			cout<<"A's Constructor."<<endl;
		}
		
		~A()
		{
			cout<<"A's Destructor."<<endl;
		}
};

class B: public A{
	public:
		B()
		{
			cout<<"B's Constructor."<<endl;
		}
		
		~B()
		{
			cout<<"B's Destructor."<<endl;
		}	
};


int main()
{
	B ob;
	return 0;
}
