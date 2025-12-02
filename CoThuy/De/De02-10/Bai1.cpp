#include<iostream>
#include<set>
using namespace std;
long long n,c=0;
short x;
void sub1(){
	while(n--){
		cin>>x;
		for(short i=1;i<=x;++i)
			if(i%3==0||i%5==0)
				c++;
		cout<<c<<'\n';
		c=0;
	}
}
void sub2(){
	short a[101];
    set<short> stn;
    while(n--){
        cin>>x;
        if(stn.find(x)!=stn.end())
            cout<<a[x];
        else{
            stn.insert(x);
            for(short i=1;i<=x;++i)
                if(i%3==0||i%5==0)
                    c++;
            a[x]=c;
            cout<<c<<'\n';
            c=0;
        }
    }
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen("Bai1.INP","r",stdin);
	//freopen("Bai1.OUT","w",stdout);
	cin>>n;
	if(n<=1000000)
		sub1();
	else if(n>1000000&&n<=10000000000)
		sub2();
}