#include<iostream>
#include<algorithm>
#pragma GCC optimize("unroll-loops")
using namespace std;
int x,y,c=0;
void sub1(){
	for(int i=1;i<=(x>=y?y:x);++i)
			if(x%i==0&&y%i==0)
				c++;
}
void sub2(){
		for(int i=1;i*i<=(x>y?y:x);++i)
			if(x%i==0){
				if(y%i==0)
					c++;
				if(x/i!=i)
					if(y%(x/i)==0)
						c++;
			}
}
void sub3(){
	int a=(x>y?y:x),b=(x>y?x:y),g=__gcd(x,y);
	for(int i=1;i*i<=g;++i)
		if(a%i==0){
			if(y%i==0)
				c++;
			if(a/i!=i)
				if(y%(a/i)==0)
					c++;
		}
}
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