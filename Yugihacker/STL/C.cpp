#include<iostream>
#include<map>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	map<char,int> mp;
	string s;
	cin>>s;
	for(auto x:s)
		 mp[x]++;
	for(auto x:mp)
		cout<<x.first<<" "<<x.second<<'\n';
}