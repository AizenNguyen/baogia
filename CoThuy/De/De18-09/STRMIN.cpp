#include<iostream>
using namespace std;
int main(){
	//freopen("STRMIN.INP","r",stdin);
	//freopen("STRMIN.OUT","w",stdout);
	short n,x,y,z; cin>>n>>x>>y>>z;
	if(x+y+z>n){
		cout<<0;
		return 0;
	}
	if(x==0 && y==0 && z>=0){
		cout<<0;
		for(short i=1;i<z;++i)
			if(i%2==0)
				cout<<0;
			else
				cout<<1;
		return 0;
	}
	else{
		if(z>0)
			cout<<0;
		for(short i=1;i<z;++i)
			if(i%2==0)
				cout<<0;
			else
				cout<<1;
		if(x>0)
			cout<<'A';
		for(short i=1;i<x;++i)
			if(i%2==0)
				cout<<'A';
			else
				cout<<'B';
		if(y>0)
			cout<<'a';
		for(short i=1;i<y;++i)
			if(i%2==0)
				cout<<'a';
			else
				cout<<'b';
		return 0;
	}
}