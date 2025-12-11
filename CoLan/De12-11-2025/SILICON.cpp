#include<iostream>
#include<vector>
using namespace std;
short n,k;
vector<short> xau;
int c=0;
void sinh(){
	cout<<"(";
	for(short pos=0;pos<xau.size()-1;++pos)
		cout<<xau[pos]<<",";
	cout<<xau[k-1]<<")\n";
	c++;
}
void back(short pos){
	int cuoi=(xau.empty()?0:xau.back());
	for(short i=cuoi+1;i<=n;++i){
		xau.push_back(i);
		if(xau.size()==k)
			sinh();
		else
			back(pos+1);
		xau.pop_back();
	}
}
int main(){
	ios_base::sync_with_stdio(0);cout.tie(0);
	freopen("SILICON.INP","r",stdin);
	freopen("SILICON.OUT","w",stdout);
	cin>>n>>k;
	back(1);
	cout<<c;
}