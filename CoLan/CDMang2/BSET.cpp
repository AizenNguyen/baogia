#include<iostream>
using namespace std;
int n,m,x,c=0,ans=0,ac[100006];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        cin>>x;
        ac[x]++;
    }
    for(int i=0;i<m;++i){
        cin>>x;
        if(ac[x]+1==2)
            ans++;
    }
    cout<<(n+m)-ans<<" "<<ans;
}
