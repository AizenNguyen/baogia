#include<iostream>
using namespace std;
short n,s,sum,ans,an[21];
void back(short start){
	for(short i=start;i<=n;++i){
		sum+=an[i];
		if(sum==s)
			ans++;
		else if(sum<s)
			back(i+1);
		sum-=an[i];
	}
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>n>>s;
	for(short i=1;i<=n;++i)
		cin>>an[i];
	back(1);
	cout<<ans;
}