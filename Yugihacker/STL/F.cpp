#include<iostream>
#include<set>
#include<map>
using namespace std;
short n,m;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin>>n>>m;
	map<set<int>,short> an; 
	int anm[n][m];
	for(short i=0;i<n;++i)
	{
		set<int> st;
		for(short j=0;j<m;++j){
			cin>>anm[i][j];
			st.insert(anm[i][j]);
		}
		an[st]++;
	}
	cout<<an.size();
}