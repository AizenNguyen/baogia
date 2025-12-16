#include<iostream>
#include<string>
using namespace std;
short v,d,ssize,len,ans=0;
string s;
void solve1(){
	for(short i=0;i<ssize;++i){
		v=d=0;
		for(short j=i;j<ssize;++j){
			if(s[j]=='V')
				v++;
			else
				d++;
			if(v==d*2)
				ans=(ans>=j-i+1?ans:j-i+1);
		}
	}
	cout<<ans;
}
void solve2(){
	
}
int main(){
	//freopen("DL.INP","r",stdin);
	//freopen("DL.OUT","w",stdout);
	cin>>s;
	ssize=s.size();
	return 0;
	if(ssize<=1000)
		solve1();
}