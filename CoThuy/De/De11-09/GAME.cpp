#include<iostream>
using namespace std;
short a,b,s=0;
int main(){
	freopen("GAME.INP","r",stdin);
	freopen("GAME.OUT","w",stdout);
    cin>>a>>b;
    if(a<b) swap(a,b);
    s+=a;
    a--;
    if(a>=b) s+=a; 
    else s+=b;
    cout<<s;
}