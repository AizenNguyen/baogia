#include<iostream>
using namespace std;
int n,k,x[10],d[10];
void sinh(){
	for(int i=1;i<=k;++i)
		cout<<x[i]<<" ";
	cout<<'\n';
}
void Try(int i){
	for(int v=x[i-1]+1;v<=n-k+1;++v){
		if(d[v]==0){
			x[i]=v;
			d[v]=1;
			if(i==k)
				sinh();
			else
				Try(i+1);
			d[v]=0;
		}
	}
}
int main(){
	cin>>n>>k;
	Try(1);
}