#include<iostream>
using namespace std;
long long s=0;
int n;
void sub1(){
    if(n%2==0)
        for(int i=2;i<=n;i+=2)
            s+=i*i;
    else
        for(int i=1;i<=n;i+=2)
            s+=i*i;
    cout<<s;
}
int main(){
    freopen("NUMBER.INP","r",stdin);
    freopen("NUMBER.OUT","w",stdout);
    cin>>n;
    sub1();
}
