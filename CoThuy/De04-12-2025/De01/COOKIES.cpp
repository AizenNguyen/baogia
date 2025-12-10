#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;
int n;
long long s,tb,tbmax=-1e18;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("COOKIES.INP","r",stdin);
    //freopen("COOKIES.OUT","w",stdout);
    cin>>n;
    long long an[n];
    for(int i=0;i<n;++i){
        cin>>an[i];
        s+=an[i];
    }
    for(int i=1;i<n-1;++i){
        s-=an[i-1];
        int it=*min_element(an+i,an+n);
        tb=(s-it)/(n-i-1);
        tbmax=(tbmax>tb?tbmax:tb);
        an[i-1]=tb;
    }
    for(int i=0;i<n-2;++i)
        if(an[i]==tbmax)
            cout<<i+1<<" ";
    cerr<<(1.0*clock() / CLOCKS_PER_SEC)<<"s\n";
}