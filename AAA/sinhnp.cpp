#include<iostream>
using namespace std;
int n,x[10];
void inkq(){
	for(int i=0;i<n;++i)
		cout<<x[i];
	cout<<'\n';
}
void ql(int i){
	for(int j=0;j<=1;++j){
		x[i]=j;
		if(i==n-1)
			inkq();
		else
			ql(i+1);
	}
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	ql(0);
}