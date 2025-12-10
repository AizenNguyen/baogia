#include<iostream>
using namespace std;
int n,c;
long long s,tb,tbmax=-1e18;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("COOKIES.INP","r",stdin);
    //freopen("COOKIES.OUT","w",stdout);
    cin>>n;
    c=n-2;
    short an[n],sf[n],atb[n];
    for(int i=0;i<n;++i){
        cin>>an[i];
        s+=an[i];
    }
    sf[n-1]=an[n-1];
    for(int i=n-2;i>=0;--i)
        sf[i]=(an[i]<=sf[i+1]?an[i]:sf[i+1]);
    for(int i=1;i<n-1;++i){
        s-=an[i-1];
        tb=(s-sf[i])/c;
        tbmax=(tbmax>tb?tbmax:tb);
        atb[i-1]=tb;
        c--;
    }
    for(int i=0;i<n-2;++i)
        if(atb[i]==tbmax)
            cout<<i+1<<" ";
}