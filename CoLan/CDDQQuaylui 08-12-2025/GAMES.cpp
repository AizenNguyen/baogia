#include<iostream>
using namespace std;
int n,smax=0,x[11],d[11],a[11][11];
void xuly(){
	int s=0;
	for(int i=1;i<=n;++i)
		s+=a[i][x[i]];
	smax=max(smax,s);
}
void Try(int i){
	for(int v=1;v<=n;v++)
		if(d[v]==0){
			x[i]=v;
			d[v]=1;
			if(i==n)
				xuly();
			else
				Try(i+1);
			d[v]=0;
		}
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;++i)
	Try(1);
}