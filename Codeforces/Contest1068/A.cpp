#include<iostream>
using namespace std;
string s;
short t,n,k,tmp,c=0;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>k>>s;
		tmp=c=0;
		for(short i=0;i<n;++i)
			if(s[i]=='1')
				tmp=k;
			else{
				if(tmp>0)
					tmp--;
				else
					c++;
			}
		cout<<c<<'\n';
	}
}