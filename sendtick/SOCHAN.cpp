#include<iostream>
using namespace std;
int n,c=0;
short s;
int tcs(int n){
    s=0;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int main(){
    freopen("SOCHAN.INP","r",stdin);
    freopen("SOCHAN.OUT","w",stdout);
    cin>>n;
    cout<<n/2-1;
}
//1000=>499 tcs l
//1001=>500 tcs c
//1002=>500 tcs l
//2000=>1000 tcs c
//2001=>1000 tcs l
//2002=>1001 tcs c
