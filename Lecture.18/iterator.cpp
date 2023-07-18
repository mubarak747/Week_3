#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<string> solar = {"mer", "venus", "earth", "mars", "jupitor", "saturn", "uranus", "neptune"};
	
	vector<string>:: iterator shivam = solar.begin(); 	
	vector<string>:: iterator champa = solar.begin();
	
		// cout<<"Shivam is at "<<shivam<<endl;
		advance(shivam,3);
		// cout<<*next(shivam,1)<<endl;
		
		cout<<"Distance from shivam "<<distance(champa, shivam)<<endl;
		
	return 0;
}
