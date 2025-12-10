#include<iostream>
#include<algorithm>
#pragma GCC optimize("unroll-loops")
using namespace std;
int x,y,c=0;
void sub4(){
	int g=__gcd(x,y);
	for(int i=1;i*i<=g;++i)
		if(g%i==0){
			c++;
			if(g/i!=i)
				c++;
		}
}
int main(){
	//freopen("CAU1.INP","r",stdin);
	//freopen("CAU1.OUT","w",stdout);
	cin>>x>>y;
	sub4();
	cout<<c;
}