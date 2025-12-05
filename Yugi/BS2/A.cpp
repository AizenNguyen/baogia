#include<iostream>
using namespace std;
short n,p[102],t[102];
long long x,s,ans=1;
long long check(long long mid){
    s=0;
    for(int i=1;i<=n;++i)
        if(mid>=p[i])
            s+=(mid-p[i])/t[i]+1;
    return s>=x;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>x;
    for(int i=1;i<=n;++i){
        cin>>p[i]>>t[i];
        ans=(ans>t[i]?ans:t[i]);
    }
    long long mid,l=1,r=x*500;
    while(l<=r){
        mid=(l+r)/2;
        if(check(mid)){
            ans=mid;
            r=mid-1;
        }
        else
            l=mid+1;
    }
    cout<<ans;
}
