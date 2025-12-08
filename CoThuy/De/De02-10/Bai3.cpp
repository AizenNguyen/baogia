#include<iostream>
using namespace std;
short p,tmp,check=0,c=0;
string s;
short as[10];
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("Bai3.INP","r",stdin);
	freopen("Bai3.OUT","w",stdout);
	cin>>p>>s;
	for(short i=0;i<s.size();++i)
		as[i]=1;
	for(short i=0;i<10;++i)
		if(as[i])
			c++;
	if(c==10){
		cout<<-1;
		return 0;
	}
	for(short i=p-1;i>=0;--i){
		tmp=i;
		while(tmp){
			if(as[tmp%10]){
				check=1;
				break;
			}
			tmp/=10;
		}
		if(check){
			cout<<i;
			return 0;
		}
	}
}