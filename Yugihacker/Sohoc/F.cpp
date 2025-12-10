#include<iostream>
#pragma GCC optimize("unroll-loops")
using namespace std;
int n,last;
long long res=0;
int main(){
    cin>>n;
    if(n<2){
        cout<<0;
        return 0;
    }
    if(n==2){
        cout<<2;
        return 0;
    }
    res+=2;
    bool ap[n+1];
    fill(ap,ap+n+1,1);
    ap[0]=ap[1]=0;
    for(int i=4;i<=n;i+=2)
        ap[i]=0;
    for(int i=3;i*i<=n;i+=2)
        if(ap[i])
        {
            res+=i;
            last=i;
            for(int j=i*i;j<=n;j+=2*i)
                ap[j]=0;
        }
    for(int i=last+2;i<=n;i+=2)
        if(ap[i])
            res+=i;
    cout<<res;
}