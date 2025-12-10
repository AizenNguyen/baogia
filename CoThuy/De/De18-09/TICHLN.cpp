#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	//freopen("TICHLN.INP","r",stdin);
	//freopen("TICHLN.OUT","w",stdout);
	vector<int> an(3); cin>>an[0]>>an[1]>>an[2];
	sort(an.begin(),an.end());
	cout<<1ll*an[1]*an[2];
}