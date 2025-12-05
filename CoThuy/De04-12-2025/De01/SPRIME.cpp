#include<iostream>
using namespace std;
bool ssnt[3000006],sdb[3000005];
short t,s;
int l,r,c=0,pf[3000006];
short tcs(int n){
    s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SPRIME.INP","r",stdin);
    freopen("SPRIME.OUT","w",stdout);
    cin>>t;
    ssnt[0]=ssnt[1]=1;
    for(int i=4;i<=3000001;i+=2)
        ssnt[i]=1;
    for(int i=3;i*i*1ll<=3000001;i+=2)
        if(!ssnt[i])
            for(long long j=i*i*1ll;j<=3000001;j+=i*1ll)
                ssnt[j]=1;
    for(int i=5;i<=3000001;++i){
        if(!ssnt[i]&&tcs(i)%5==0)
            pf[i]=pf[i-1]+1;
        else
            pf[i]=pf[i-1];
    }
    while(t--){
        cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<'\n';
    }
}
