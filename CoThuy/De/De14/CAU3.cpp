#include<bits/stdc++.h>
#include<string>
using namespace std;
int c=0,last=0;
string s;
int main(){
	//freopen("CAU3.inp","r",stdin);
	//freopen("CAU3.out","w",stdout);
	cin>>s;
	int pf[s.size()];
	pf[0]=s[0]-'0';
	for(int i=1;i<s.size();++i){
		pf[i]=
		if(s[i]=='0'){
			last=pf[i-1];
			pf[i]=0;
		}
		if(s[i]!='0'&&s[i-1]!='0')
			pf[i]=pf[i-1]+s[]
		if(pf[i]%3==0){
			c++;
		}
	}
	for()
}
