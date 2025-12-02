#include<iostream>
using namespace std;
short n,x;
int dc,c=0;
long long p,q;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    freopen("DAYCON.INP","r",stdin);
    freopen("DAYCON,OUT","w",stdout);
    cin>>n>>p>>q;
    if(p>100000000){
        cout<<0;
        return 0;
    }
    if(n==1){
        cin>>x;
        if(x>=p&&x<=q)
            cout<<1;
        else
            cout<<0;
        return 0;
    }
    int pf[n];
    cin>>pf[0];
    for(short i=1;i<n;++i){
        cin>>pf[i];
        pf[i]+=pf[i-1];
        if(pf[i]>=p&&pf[i]<=q)
            c++;
    }
    for(short i=0;i<n;++i)
        for(short j=i;j<n;++j){
            dc=pf[j]-pf[i];
            if(dc>=p&&dc<=q)
                c++;
        }
    cout<<c;
}
