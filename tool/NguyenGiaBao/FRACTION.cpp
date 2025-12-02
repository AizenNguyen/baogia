#include<iostream>
using namespace std;
long long b,n,a,nn,c=0;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    freopen("FRACTION.INP","r",stdin);
    freopen("FRACTION.OUT","w",stdout);
    cin>>b>>n;
    nn=n*n;
    for(long long m=1;m<=2*n;++m){;
        if(m==n)
            continue;
        a=m*(2*n-m);
        if((b*a)%nn==0)
            c++;
    }
    cout<<c;
}

