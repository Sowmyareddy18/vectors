#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main() 
{
	vector<int>ve={10,20,30};
	ve.insert(ve.begin()+2,100);
	for(auto it:ve)
	{
	    cout<<it<<" ";
	}
	return 0;
}
