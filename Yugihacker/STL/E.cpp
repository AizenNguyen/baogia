#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long c=0;
	int n,x,xx;
	cin>>n>>x;
	unordered_map<int,int> ump;
	while(n--)
	{
		cin>>xx;
		c+=ump[x-xx];
		ump[xx]++;
	}
	// for(auto xx:ump)
	// 	if(ump.count(x-xx.first))
	// 		c+=(xx.second*ump[x-xx.first]);
	cout<<c;
}