#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n;
long long x,sc=0,sl=0;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    freopen("LUCKY.INP","r",stdin);
    freopen("LUCKY.OUT","w",stdout);
    cin>>n;
    vector<int> al(2,0),ac(2,0);
    while(n--){
        cin>>x;
        if(x%2)
            ac.push_back(x);
        else
            al.push_back(x);
    }
    sort(ac.rbegin(),ac.rend());
    sort(al.rbegin(),al.rend());
    sc=1ll*(ac[0]+ac[1]);
    sl=1ll*(al[0]+al[1]);
    cout<<(sc>=sl?sc:sl);
}
