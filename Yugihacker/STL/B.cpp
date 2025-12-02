#include<iostream>
#include<map>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string s; map<int,int> mp;
	int n,x,c=0;
	cin>>n;
	while(n--){
		cin>>s;
		if(s=="add"){
			cin>>x;
			mp[x]++;
		}
		else if(s=="del"){
			cin>>x;
			mp.erase(x);
		}
		else if(s=="count"){
			cin>>x;
			cout<<(mp.count(x)!=0?mp[x]:0)<<'\n';
		}
		else if(s=="size")
			cout<<mp.size()<<'\n';
	}
}