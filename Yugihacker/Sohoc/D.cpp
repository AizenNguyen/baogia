#include<iostream>
#pragma GCC optimize("unroll-loops")
using namespace std;
int n;
short c=0;
long long gt(int n){
	if(n<=1) return 1;
	return n*gt(n-1);
}
int main(){
	cin>>n;
	long long x=gt(n);
	while(x!=0)
		if(x%10==0){
			c++;
			x/=10;
		}
		else
			break;
	cout<<gt(n);
}