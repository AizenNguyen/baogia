#include<iostream>
using namespace std;
long long a,b;
int main(){
    freopen("PT.INP","r",stdin);
    freopen("PT.OUT","w",stdout);
    cin>>a>>b;
    if(a==0&&b!=0)
        cout<<"VN";
    else if(b==0)
        cout<<"VSN";
    else if(a!=0&&b!=0)
        cout<<"NDN";
}
