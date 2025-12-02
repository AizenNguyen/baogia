#include<iostream>
#pragma GCC optimize("unroll-loops")
using namespace std;
int n,x[100],used[10];
void inkq(){
	for(int i=1;i<=n;++i)
		cout<<x[i];
	cout<<'\n';
}
void ql(int i){
	for(int j=0;j<=n;++j){
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
	cin>>n;
	ql(1);
}