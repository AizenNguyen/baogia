#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool used[1003];
vector<short> an;
int n,x;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    freopen("CPLOAI.INP","r",stdin);
    freopen("CPLOAI.OUT","w",stdout);
    cin>>n;
    while(n--){
        cin>>x;
        if(!used[x]){
            used[x]=1;
            an.push_back(x);
        }
    }
    sort(an.begin(),an.end());
    for(auto x:an)
        cout<<x<<" ";
}
