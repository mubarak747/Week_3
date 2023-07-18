#include <bits/stdc++.h>
using namespace std;

int main()
{
	list<int>l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	
	//list<int>::iterator it = l.begin();
	
	for(list<int>::iterator it = l.begin();it!=l.end();it++)
		cout<<*it<<" ";
		
	l.push_front(120);
	
	l.pop_back();
	l.pop_front();
	
	for(list<int>::iterator it = l.begin();it!=l.end();it++)
		cout<<*it<<" ";
	
// l.reverse();
// 	l.sort();
		
	return 0;
}
