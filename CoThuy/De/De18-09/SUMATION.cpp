#include<iostream>
#include<iomanip>
using namespace std;
void 
int main(){
	short n; cin>>n;
	double s=0,t,tmp,an[n];
	if(n%2==0){
		cin>>an[0]>>an[1];
		s=an[0]+an[1];
		t+=s/100*5;
		for(int i=2;i<n;++i){
			cin>>an[i];
			if(i%2!=0){
				s+=an[i]+an[i-1];
				tmp=(an[i]+an[i-1])/100*5;
				t+=tmp;
			}
		}
		cout<<fixed<<setprecision(2)<<t+=s;
	}
}