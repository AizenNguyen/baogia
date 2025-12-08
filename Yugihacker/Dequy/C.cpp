#include<iostream>
#pragma GCC optimize("unroll-loops")
#define ll long long
using namespace std;
const int MOD=1e9+7;
short n,x[10],used[10];
void inkq(){
	for(short i=1;i<=n;++i)
		cout<<x[i];
	cout<<'\n';
}
void ql(int i){
	for(short j=1;j<=n;++j){
		if(used[j]==0){
			x[i]=j;
			used[j]=1;
			if(i==n)
				inkq();
			else
				ql(i+1);
			used[j]=0;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen(".inp","r",stdin);
	//freopen(".out","w",stdout);
	cin>>n;
	ql(1);
}