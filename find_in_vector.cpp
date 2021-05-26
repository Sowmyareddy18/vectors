#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	vector<int>arr;//vector<data type>name
	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);
	arr.push_back(40);
	vector<int>::iterator it;
	int x;
	cout<<"enter the element to find";
	cin>>x;
	it=find(arr.begin(),arr.end(),x);
	if(it!=arr.end())
	{
	cout<<(it-arr.begin());
	}
	else
	{
		cout<<-1;
	}
	return 0;
}
