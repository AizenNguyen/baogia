#include<iostream>
#include<map>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long x,min=10e9+1,tmp=-1;
	int n;
	cin>>n;
	multimap<int,int> mmp;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		min=(min<x?min:x);
		mmp.insert({x,i});
	}
	tmp=min;
	cout<<tmp<<'\n';
	for(auto x:mmp)
	{
		if(tmp!=x.first)
		{
			tmp=x.first;
			cout<<'\n'<<x.first<<'\n'<<x.second<<" ";
		}
		else
			cout<<x.second<<" ";
	}
}