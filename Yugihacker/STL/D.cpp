#include<iostream>
#include<map>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,x;
	cin>>n;
	map<int,int> mp;
	while(n--)
	{
		cin>>x;
		mp[x]++;
	}
	cout<<mp.size();
}