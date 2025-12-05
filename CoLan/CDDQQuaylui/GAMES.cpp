#include<iostream>
using namespace std;
bool visit[11];
short n,ans=-100,an[11][11];
void Try(short pos,short s){
    if(pos==n+1){
        if(s>ans){
            ans=s;
        }
        return;
    }
    for(short c=1;c<=n;++c){
        if(!visit[c]){
            visit[c]=1;
            Try(pos+1,s+an[pos][c]);
            visit[c]=0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("GAMES.INP","r",stdin);
    //freopen("GAMES.OUT","w",stdout);
    cin>>n;
    for(short r=1;r<=n;++r)
        for(short c=1;c<=n;++c)
            cin>>an[r][c];

    Try(1,0);
    cout<<ans;
}
