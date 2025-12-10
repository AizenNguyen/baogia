#include<iostream>
using namespace std;
int n;
long long c=0,s=0,res=-10000000000000000;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    freopen("DEP.INP","r",stdin);
    freopen("DEP.OUT","w",stdout);
    cin>>n;
    int a[n];
    for(short i=0;i<n;++i)
        cin>>a[i];
    for(short i=0;i<n;++i){
        if(a[i]%3!=0){
            s+=a[i];
            res=(res>s?res:s);
        }
        else{
            s=0;
            c++;
        }
    }
    if(c==n)
        cout<<0;
    else
        cout<<res;
}
