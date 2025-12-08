#include<iostream>
using namespace std;
short x;
int n,c=0,an[1003];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    freopen("DCOW.INP","r",stdin);
    freopen("DCOW.OUT","w",stdout);
    cin>>n;
    while(n--){
        cin>>x;
        an[x]++;
    }
    for(auto x:an)
        if(x!=0)
            c+=x*(x-1)/2;
    cout<<c;
}
