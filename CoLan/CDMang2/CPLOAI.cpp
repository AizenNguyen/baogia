#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool used[1003];
int n,x;
vector<short> an;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    while(n--){
        cin>>x;
        if(!used[x]){
            an.push_back(x);
            used[x]=1;
        }
    }
    cout<<an.size()<<'\n';
    sort(an.begin(),an.end());
    for(auto x:an)
        cout<<x<<" ";
}
