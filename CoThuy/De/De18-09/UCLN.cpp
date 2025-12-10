#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen("UCLN.INP","r",stdin);
	//freopen("UCLN.OUT","w",stdout);
	short n; cin>>n;
	int d1,d2,res=0;
	int an[n];
	cin>>an[0]>>an[1];
	d2=__gcd(an[0],an[1]);
	for(int i=2;i<n;++i){
		cin>>an[i];
		d1=d2;
		d2=__gcd(an[i],an[i-1]);
		res=(res>=d2?res:d2);
	}
	cout<<res;
}