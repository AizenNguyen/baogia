#include<iostream>
#include<vector>
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string s;
	vector<int> an;
	int n,x;
	cin>>n;
	while(n--)
	{
		cin>>s;
		if(s=="push")
		{
			cin>>x;
			an.push_back(x);
		}
		else if(s=="pop")
		{
			if(!an.empty())
				an.erase(an.begin()+an.size()-1);
		}
		else if(s=="index")
		{
			cin>>x;
			cout<<(x>an.size()?-1:an[x-1])<<'\n';
		}
		else if(s=="size")
			cout<<an.size()<<'\n';
	}
}