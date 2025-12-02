#include<iostream>
using namespace std;
int n,k,c=0;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	//freopen("WATERFILL.INP","r",stdin);
	//freopen("WATERFILL.OUT","w",stdout);
	cin>>n>>k;
	int s=k;
	int an[n],dt[n];
	for(int i=0;i<n;++i)
		cin>>an[i];
	fill(dt,dt+n,0);
	while(an!=dt){
		for(int i=0;i<n;++i){
			if(dt[i]==an[i]){
				s+=k;
				continue;
			}
			dt[i]+=s;
			s=k;
			if(dt[i]>=an[i]){
				s+=dt[i]-an[i];
				dt[i]=an[i];
			}
		}
		c++;
	}
	cout<<c;
}