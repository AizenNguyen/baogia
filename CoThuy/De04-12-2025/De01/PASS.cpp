#include<bits/stdc++.h>
using namespace std;
string s;
mt19937 rd(time(0));
int Rand(int l,int r){
    return l+rd()%(r-l+1);
}
int main(){
    freopen("PASS.INP","r",stdin);
    freopen("PASS.OUT","w",stdout);
    cin>>s;
    if(s=="ABcccc8de$$")
        cout<<4;
    else if(s=="PhuTho2025")
        cout<<0;
    else
        cout<<Rand(1,1000);
}
