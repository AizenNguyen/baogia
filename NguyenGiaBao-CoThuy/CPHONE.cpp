#include<iostream>
using namespace std;
short x;
int n,votemax=0,an[1003];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    while(n--){
        cin>>x;
        an[x]++;
        votemax=(votemax>an[x]?votemax:an[x]);
    }
    for(short i=1;i<=1000;++i)
        if(an[i]==votemax)
            cout<<i<<'\n';
}
