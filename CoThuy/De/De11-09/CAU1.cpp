#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	freopen("CAU1.INP","r",stdin);
	freopen("CAU1.OUT","w",stdout);
	int x,y,c=0; cin>>x>>y;
	int d=__gcd(x,y);
	for(int i=1;i*i<=d;++i)
		if(d%i==0){
			c++;
			if(d/i!=i)
				c++;
		}
	cout<<c;
}