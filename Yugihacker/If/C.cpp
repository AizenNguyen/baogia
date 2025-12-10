#include<iostream>
#include<iomanip>
using namespace std;
int c=0;
long long x;
long double res=0;
int main(){
	while(cin>>x){
		cin>>x;
		res+=x;
		c++;
	}
	cout<<fixed<<setprecision(6)<<res/c;
}