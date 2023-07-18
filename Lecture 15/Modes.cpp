#include <bits/stdc++.h>
using namespace std;

class A
{
	int a;
	protected:
		int b;
	public:
		int c;
};

class B: public A
{
	
	public:	
};

int main()
{
	//A ob;
	//cout<<ob.a<<endl<<ob.b<<endl<<ob.c<<endl;
	
	B ob;
	cout<<ob.a<<endl<<ob.b<<endl<<ob.c<<endl;
	
	return 0;
}
