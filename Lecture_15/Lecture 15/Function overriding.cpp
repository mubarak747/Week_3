#include <bits/stdc++.h>
using namespace std;

//single
class Animal
{
	public:
		void speak()
		{
			cout<<"they made a sound!"<<endl;
		}
};

class Dog: public Animal
{
	public: 
	void speak()
		{
			cout<<"Bow Bow!"<<endl;
		}
};

class Cat: public Animal
{
	public:	
	void speak()
		{
			cout<<"Meowww!"<<endl;
		}
};

int main()
{
	Animal a;
	Dog d;
	Cat c;
	
	a.speak();
	d.speak();
	c.speak();
	
	//call parent's speak() function using SRO.
	c.Animal::speak();
	
	return 0;
}
