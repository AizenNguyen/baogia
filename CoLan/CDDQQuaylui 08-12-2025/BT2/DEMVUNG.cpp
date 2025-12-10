#include<iostream>
using namespace std;
bool nt[100005];
short m,n;
//void xuli(){
// 	for()
//}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen("DEMVUNG.INP","r",stdin);
	//freopen("DEMVUNG.OUT","w",stdout);
	cin>>m>>n;
	// int a[m+1][n+1],ans[m][n];
	// for(i=1;i<=m;++i)
	// 	for(j=1;j<=n;++j)
	// 		cin>>a[i][j];
	nt[0]=nt[1]=1;
	for(int i=4;i<=100005;i+=2)
		nt[i]=1;
	for(int i=3;i*i<=100005;i+=2){
		if(!nt[i])
			for(int j=i*i;j<=100005;j+=i)
				nt[i]=1;
	}
	for(int i=0;i<=23;++i)
		cout<<i<<" "<<nt[i]<<'\n';
}
