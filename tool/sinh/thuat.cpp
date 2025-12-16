#include<iostream>
using namespace std;
int main(){
    freopen("sinh.inp","r",stdin);
    freopen("sinh.out","w",stdout);
    int a,b;
    cin>>a>>b;
    if(a%3==0)
        a++;
    cout<<a*b;
}
