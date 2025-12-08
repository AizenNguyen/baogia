#include<iostream>
#include<unordered_map>
#pragma GCC optimize("unroll-loops")
using namespace std;
int n,x,res=0;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen("CAU2.inp","r",stdin);
	//freopen("CAU2.out","w",stdout);
	cin>>n;
	unordered_map<int,int> ump;
	while(n--){
		cin>>x;
		ump[x]++;
		res=(res>=ump[x]?res:ump[x]);
	}
	cout<<res;
}