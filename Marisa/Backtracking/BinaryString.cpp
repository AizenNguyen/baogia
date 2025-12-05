#include<iostream>
using namespace std;
short n,an[11];
void sinh(){
    for(short i=0;i<n;++i)
        cout<<an[i];
    cout<<'\n';
}
void Try(short pos){
    for(short i=0;i<=1;++i){
        an[pos]=i;
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
