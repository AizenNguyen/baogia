#include<iostream>
using namespace std;
long long n;
long long c=0;
int main(){
    freopen("TIMSO.INP","r",stdin);
    freopen("TIMSO.OUT","w",stdout);
    cin>>n;
    if(n==0){
        cout<<0;
        return 0;
    }
    //if(n>=1)
      //  c=2;
    //for(int i=1;i<=n;++i)
      //  c+=i*2-2;
    //cout<<c;
    cout<<n*(n-1)+2;
}
