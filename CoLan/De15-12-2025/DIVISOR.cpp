#include<iostream>
#include<vector>
#include<ctime>
using namespace std;
int n,x,mx=0,spf[3000001],cnt[3000001];
long long ans=1;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    freopen("DIVISOR.INP","r",stdin);
    freopen("DIVISOR.OUT","w",stdout);
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>mx)mx=a[i];
    }
    for(int i=1;i<=mx;i++)
        spf[i]=i;
    for(int i=2;i*i<=mx;i++)
        if(spf[i]==i)
            for(int j=i*i;j<=mx;j+=i)
                if(spf[j]==j)
                    spf[j]=i;
    for(int i=0;i<n;i++){
        x=a[i];
        while(x>1){
            cnt[spf[x]]++;
            x/=spf[x];
        }
    }
    for(int i=2;i<=mx;i++)
        if(cnt[i])
            ans=ans*(cnt[i]+1)%123456789;
    cout<<ans;
}
