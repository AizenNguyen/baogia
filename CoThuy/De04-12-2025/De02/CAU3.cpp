#include<iostream>
using namespace std;
string s;
short k,l,r,tmp;
long long a,b,c=1,ans;
int main(){
    cin>>a>>b>>k;
    //if(a==b)
    if(k==1){
        cout<<b-a+1;
        return 0;
    }
    if(k==20){
        cout<<0;
        return 0;
    }
    tmp=k-1;
    while(tmp){
        c=c*10+1;
        tmp--;
    }
    if(b<c){
        cout<<0;
        return 0;
    }
    cout<<c<<'\n';
    for(long long i=a;i<=b;++i){
        s=to_string(i);
        l=0;
        r=c=1;
        while(l<s.size()){
            if(s[l]==s[r]){
                 c++;
                 r++;
            }
            else{
                c=1;
                r++;
                l=r-1;
            }
            if(c==k){
                ans++;
                break;
            }
        }
    }
    cout<<ans;
}
