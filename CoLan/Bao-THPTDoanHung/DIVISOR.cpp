#include<iostream>
using namespace std;
short n;
long long tich=1,c=0;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	freopen("DIVISOR.INP","r",stdin);
	freopen("DIVISOR.OUT","w",stdout);
	cin>>n;
	int an[n];
	for(short i=0;i<n;++i){
		cin>>an[i];
		tich*=an[i];
	}
	for(int i=1;i*i<=tich;++i){
		if(tich%i==0){
			c++;
			if(tich/i!=i)
				c++;
		}
	}
	cout<<c%123456789;
}