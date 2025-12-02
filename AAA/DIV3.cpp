#include<iostream>
#define ll long long
using namespace std;
const int MOD=1e9+7;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen("DIV3.INP","r",stdin);
	//freopen("DIV3.OUT","w",stdout);
	int n,c=0; cin>>n;
	int an[n];
	if(n<=100){
		for(int i=0;i<n;i++)
			cin>>an[i];
		for(int i=0;i<n-1;i++)
			for(int j=i+1;j<n;j++)
				if((an[i]+an[j])%3==0)
					c++;
		cout<<c;
	}
	else{
	int cnt=0,chia[n];
		for(int i=0;i<n;i++){
			cin>>an[i];
			if(an[i]%3==0)
				c++;
			else{
				chia[cnt]=an[i];
				cnt++;
			}
		}
		c=(c*(c-1))/2;
		for(int i=0;i<cnt-1;i++)
			for(int j=i+1;j<cnt;j++)
				if((chia[i]+chia[j])%3==0)
					c++;
		cout<<c;
	}
}