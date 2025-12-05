#include<iostream>
using namespace std;
short n,xau[14];
void sinh(){
    for(short pos=0;pos<n;++pos)
        cout<<xau[pos];
    cout<<'\n';
}
void Try(short pos){
    for(short i=0;i<=2;++i){
        xau[pos]=i;
        if(pos==n-1)
            sinh();
        else
            Try(pos+1);
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    Try(0);
}
