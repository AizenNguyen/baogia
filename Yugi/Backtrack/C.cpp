#include<iostream>
using namespace std;
bool used[11];
short n,xau[11];
void sinh(){
    for(short pos=0;pos<n;++pos)
        cout<<xau[pos];
    cout<<'\n';
}
void Try(short pos){
    for(short i=1;i<=n;++i){
        if(!used[i]){
            xau[pos]=i;
            used[i]=1;
        }
        if(pos==n-1){
            sinh();
            used[i]=0;
        }
        else
            Try(pos+1);
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    Try(0);
}
