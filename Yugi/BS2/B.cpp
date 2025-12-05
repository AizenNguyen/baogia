#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    double s;
    cin>>s;
    double l=0,r=sqrt(s),mid,val;
    for(int i=0;i<=100;++i){
        mid=(l+r)/2;
        val=mid*mid+sqrt(mid);
        if(val<s)
            l=mid;
        else
            r=mid;
    }
    cout<<fixed<<setprecision(6)<<(double)((l+r)/2);
}
