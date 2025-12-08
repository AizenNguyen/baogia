#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n; cin >>n;
	int an[n];
	for(int i=0;i<n;++i)
		cin>>an[i];
	sort(an,an+n);
	cout<<an[(n+1)/2-1];
}