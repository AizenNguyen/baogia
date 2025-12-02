#include<iostream>
#include<unordered_set>
using namespace std;
int n,m,x,giao=0;
unordered_set<int> un,um;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
    while(n--){
        cin>>x;
        un.insert(x);
    }
    while(m--){
        cin>>x;
        um.insert(x);
    }
    for(auto x:un)
        if(um.count(x))
            giao++;
    cout<<un.size()+um.size()-giao<<" "<<giao;
}
