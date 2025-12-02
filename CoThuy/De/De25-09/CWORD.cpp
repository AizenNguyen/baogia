#include<iostream>
using namespace std;
short c=0,tmp;
string s;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("CWORD.INP","r",stdin);
	freopen("CWORD.OUT","w",stdout);
	while(cin>>s){
		short sai=s.size();
		if(sai==1){
			c++;
			continue;
		}
		short mid=sai/2;
			for(short i=0;i<mid;++i){
				if(s[i]!=s[sai-i-1]){
					break;
				}
				if(i==mid-1)
					c++;
			}
		}
	cout<<c;
}