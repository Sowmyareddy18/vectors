#include<iostream>
#include<vector>
using namespace std;
int main()
{
	//creat a vector
	vector<int>ve;
	ve.push_back(10);//{10}
	ve.push_back(20);//{10,20}
	ve.push_back(40);//ve.emplace_back(40);//{10,20,40}
	ve.pop_back();//to remove last value
	//print the elements in vector
     /*for(int i=0;i<ve.size();i++)
     {
     	cout<<ve[i]<<" ";
	}*/
	//vector<int>arr={10,20,30,40};//{100,100,100}
	//vector<int>arr(5);//{0,0,0,0,0}
     //copy one vector to another
     //vector<int>vel(ve);//{10,20}
     vector<int>::iterator it=ve.begin();
     cout<<*(it)<<" ";
     it++;
     cout<<*(it);
     for(vector<int>::iterator it=ve.begin();it!=ve.end();it++)
     {
     	cout<<*(it)<<" ";
	}
	for(auto it=ve.begin();it!=ve.end();it++)
	{
		cout<<*(it)<<" ";
	}
	for(auto it:ve)
	{
		cout<<*(it)<<" ";
	}
     return 0;
}
