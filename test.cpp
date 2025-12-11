#include<iostream>
using namespace std;
int n;
long long remain,ave,aveMax=1e18;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("COOKIES.INP","r",stdin);
    //freopen("COOKIES.OUT","w",stdout);
    cin>>n;
    short an[n];
    long long sf[n];
    for(int i=0;i<n;++i){
        cin>>an[i];
        remain+=an[i];
    }
    sf[n-1]=an[n-1];
    for(int i=n-2;i>=0;--i)
        sf[i]=(sf[i+1]<=an[i]?sf[i+1]:an[i]);
    for(int k=0;k<n-1;++k){
        remain-=an[k];
        ave=(remain-sf[k+1])/(n-k-1);
        cout<<<<'\n';
}
