#include<iostream>
using namespace std;
int n,m,res,c=0;
bool ssnt[60004];
int legendre(int n, int p) {
    res=0;
    while(n){
        res+=n/p;
        n/=p;
    }
    return res;
}
int main() {
    freopen("CPRDIV","r",stdin);
    freopen("CPRDIV","w",stdout);
    cin>>n>>m;
    ssnt[0]=ssnt[1]=1;
    ssnt[2]=0;
    for(short i=4;i<=n;i+=2)
        ssnt[i]=1;
    for(short i=3;i<=n;i+=2)
        if(!ssnt[i])
            for(short j=i*i;j<=n;j+=i)
                ssnt[j]=1;
    for(int p=2;p<=n;p++)
        if(!ssnt[p]){
            int exp=legendre(n,p)-legendre(m,p)-legendre(n-m,p);
            if(exp>0)
                c++;
        }
    cout<<c;
}
