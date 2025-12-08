#include<iostream>
using namespace std;
int n,h[9],d[9],c1[15],c2[15];
void sinh(){
	for(int i=1;i<=n;++i)
		cout<<h[i]<<" ";
	cout<<'\n';
}
void Try(int pos){
	for(int i=1;i<=n;++i){
		if(d[i]==0&&c1[i-pos+7]==0&&c2[i+pos]==0){
			h[pos]=i;
			d[i]=c1[i-pos+7]=c2[i+pos]=1;
			if(pos==n)
				sinh();
			else
				try+1;
			d[i]=c1[i-pos+7]=c2[i+pos]=0;
		}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	Try(0);
}