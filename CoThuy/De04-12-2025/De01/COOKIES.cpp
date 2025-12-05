#include<iostream>
using namespace std;
int n,s=0;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("COOKIES.INP","r",stdin);
    //freopen("COOKIES.OUT","w",stdout);
    cin>>n;
    short an[n];
    cin>>an[0];
    for(int i=1;i<n;++i){
        cin>>an[i];
        s+=an[i];
    }
}
