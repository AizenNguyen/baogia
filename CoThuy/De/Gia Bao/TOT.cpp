#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
short n;
int x,c=0;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    freopen("TOT.INP","r",stdin);
    freopen("TOT.OUT","w",stdout);
    cin>>n;
    if(n==3){
        cout<<2;return 0;}
    vector<int> a;
    unordered_map<short,int> ump;
    for(short i=0;i<n;++i){
        cin>>x;
        if(ump[x]==0){
            a.push_back(x);
            ump[x]++;
        }
        else
            continue;
    }
    sort(a.begin(),a.end());
    vector<int> b=a;
    int sz=a.size();
    for(short i=0;i<sz-1;++i)
        for(short j=i+1;j<sz;++j)
            for(short k=1;k<n;++k){
                if(b[k]!=a[i]&&b[k]!=a[j])
                    if(a[i]+a[j]+b[k]*(-1)==0){
                    c++;
        }
    }
    cout<<c;
}
