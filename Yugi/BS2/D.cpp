#include<iostream>
using namespace std;
int n,m,an[200005];
long long mid,s,ans=1,l=0,r=1e18;
long long check(long long mid){
    s=0;
    for(int i=1;i<=n;++i){
        s += mid/an[i];
        if(s>=m)return 1;
    }
    return 0;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;++i)
        cin>>an[i];
    ans = r;
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
