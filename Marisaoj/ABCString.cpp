#include<iostream>
#pragma GCC optimize("unroll-loops")
#define ll long long
using namespace std;
short n;
char x[10];
void inkq(){
	for(int i=0;i<n;i++)
		cout<<x[i];
	cout<<'\n';
}
void ql(int pos){
	for(int i=65;i<=67;i++){
		if((char)i!=x[pos-1]){
			x[pos]=(char)i;
			if(pos==n-1)
				inkq();
			else
				ql(pos+1);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen(".inp","r",stdin);
	//freopen(".out","w",stdout);
	cin>>n;
	ql(0);
}