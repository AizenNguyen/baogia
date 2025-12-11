#include<iostream>
using namespace std;
bool nt[100005];
short m,n;
int a[21][21],ans[21][21];
void xuli(int row){
 	for(int col=0;col<n;++col){
 		if(!nt[a[row][col]]){
 			ans[row][col]=0;
 		}
 		else{
 			ans[row][col]=a[row][col];
 			xuli(row+1);
 			continue;
 		}
 	}
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	//freopen("DEMVUNG.INP","r",stdin);
	//freopen("DEMVUNG.OUT","w",stdout);
	cin>>m>>n;
	for(int row=0;row<m;++row)
		for(int col=0;col<n;++col)
	 		cin>>a[row][col];
	nt[0]=nt[1]=1;
	for(int i=4;i<=100005;i+=2)
		nt[i]=1;
	for(int i=3;i*i<=100005;i+=2)
		if(!nt[i])
			for(int j=i*i;j<=100005;j+=i)
				nt[j]=1;
	xuli(0);
	for(int row=0;row<m;++row){
		for(int col=0;col<n;++col)
			cout<<ans[row][col]<<" ";
		cout<<'\n';
	}
}
