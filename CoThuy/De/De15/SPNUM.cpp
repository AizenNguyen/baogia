#include<iostream>
#include<cmath>
using namespace std;
long long n;
int c=0;
int main(){
	//freopen("SPNUM.inp","r",stdin);
	//freopen("SPNUM.out","w",stdout);
	cin>>n;
	if(n==0||n==1)
		cout<<0;
	int x=sqrt(n);
	bool ap[x];
	fill(ap,ap+x,0);
	ap[0]=ap[1]=1;
	ap[2]=0;
	for(int i=4;i<=x;i+=2)
		ap[i]=1;
	for(int i=3;i*i<=x;i+=2)
		if(ap[i]==0)
			for(int j=i*i;j<=x;j+=i*2)
				ap[j]=1;
	for(long long i=2;i*i<=n;++i)
		if(ap[i]==0)
			c++;
	cout<<c;
}