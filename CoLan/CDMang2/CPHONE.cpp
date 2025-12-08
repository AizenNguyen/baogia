#include<iostream>
using namespace std;
int n;
short x,maxvote=0,ac[1003];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("CPHONE.INP","r",stdin);
    freopen("CPHONE.OUT","w",stdout);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>x;
        ac[x]++;
        maxvote=(maxvote>ac[x]?maxvote:ac[x]);
    }
    for(short i=1;i<=1000;++i)
        if(ac[i]==maxvote)
            cout<<i<<'\n';
}
