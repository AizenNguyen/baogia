#include<iostream>
using namespace std;
int n;
long long s,c=0,a[1000006];
bool tcs(long long x){
    s=0;
    while(x!=0){
        s+=x%10;
        x/=10;
    }
    return s%3==0;
}
void solve1(){
    for(int i=0;i<n-1;++i)
        for(int j=i+1;j<n;++j)
            if(tcs(a[i]+a[j]))
                c++;
    cout<<c;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    freopen("DIVBLE.INP","r",stdin);
    freopen("DIVBLE.OUT","w",stdout);
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>a[i];
    solve1();
}
