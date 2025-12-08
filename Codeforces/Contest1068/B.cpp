#include<iostream>
using namespace std;
short t;
int n,a,b;
long long k;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n;
		k=0;
		int a[n],b[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		for(int i=0;i<n;++i){
			cin>>b[i];
			k=(abs(a[i])>=abs(b[i])?k-a[i]:b[i]-k);
		}
		cout<<k<<'\n';
	}
}