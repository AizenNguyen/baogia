#include<iostream>
#pragma GCC optimzie("unroll-loops")
using namespace std;
int n,k,x[100];
void inkq(){
	for(int i=1;i<=k;++i)
		cout<<x[i];
	cout<<'\n';
}
void ql(int i){
	for(int j=x[i-1]+1;j<=n-k+i;++j){
		x[i]=j;
		if(i==k)
			inkq();
		else
			ql(i+1);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>k;
	ql(1);
}