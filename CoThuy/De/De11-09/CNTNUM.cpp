#include<iostream>
#include<cmath>
using namespace std;
long long a,b,cnt=0;
int c,d;
int main(){
	//freopen("CNTNUM.INP","r",stdin);
	//freopen("CNTNUM.OUT","w",stdout);
	cin>>a>>b>>c>>d;
	long long acd=a/c+a/d-a/(c*d);
	long long bcd=b/c+b/d-b/(c*d);
	cout<<(b-a+1)-(bcd-acd);
}