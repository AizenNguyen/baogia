#include<iostream>
using namespace std;
short t;
int a,b,n,l,r,mid,ans,c;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>t;
	while(t--){
		cin>>a>>b>>n;
		c=0,r=1000000000;
		while(a<=r){
			mid=(a+r)/2;
			if(mid%a==0||mid%b==0){
				ans=mid;
				cout<<ans<<" ";
			}
			r=mid-1;
		}
		cout<<'\n';
	}
}