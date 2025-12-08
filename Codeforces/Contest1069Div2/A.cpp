#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
short t,n,x;
int main(){
	ios_base::sync_with_stdio(0);
	cin>>t;
	while(t--){
		cin>>n;
		set<short> st;
		for(short i=0;i<n;++i){
			cin>>x;
			st.insert(x);
		}
		auto it=lower_bound(st.begin(),st.end(),st.size());
		cout<<*it<<'\n';
	}
}