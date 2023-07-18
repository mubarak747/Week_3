#include <bits/stdc++.h>
using namespace std;

template <typename T>
T sum(vector<T>&v, T def = 0)
{
	T s = def;
	for(T ele:v)
		s += ele;
		
	/*
	T a;
	for(int i=0;i<v.size();i++)
	{
		a = v[i];
		s+=a; or s+=v[i];
	}
	*/
	return s;
}

int main()
{
	vector<int>v = {1,2,3,4,5,6,7,8,9};
	vector<double>v2 = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
	
	cout<<sum<int>(v)<<endl;
	cout<<sum<double>(v2)<<endl;
	
	return 0;
}
