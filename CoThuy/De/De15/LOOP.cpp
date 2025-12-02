#include<iostream>
#include<vector>
using namespace std;
int n,k,x,i=0,inf=1;
long long res=0;
int main(){
	//freopen("LOOP.inp","r",stdin);
	//freopen("LOOP.out","w",stdout);
	cin>>n>>k;
	vector<int> an(n);
	for(int i=0;i<n;++i)
		cin>>an[i];
	while(inf==1){
		if(an[i]%k==0){
			res+=an[i];
			x=an[i]/k;
			for(int j=0;j<k;++j){
				res+=x;
				an.push_back(x);
			}





		}
		else
			break;
		i++;
	}
	cout<<res;
}