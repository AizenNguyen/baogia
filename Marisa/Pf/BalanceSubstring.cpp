#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    short c=0,ssize=s.size(),pf[ssize];
    pf[0]=(s[0]=='1'?1:-1);
    for(short i=1;i<ssize;++i)
        pf[i]=(s[i]=='1'?pf[i-1]+1:pf[i-1]-1);
    for(short l=0;l<ssize-1;++l)
        for(short r=l+2;r<ssize;++r)
            if(pf[r]-pf[l]==0)
                c++;
    for(auto x:pf)
        if(x==0)
            c++;
    cout<<c;
}
