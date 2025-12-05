#include<iostream>
using namespace std;
int n,q,t,x,kq;
int an[100000];
int bs(int n,int x){
    int l=1,r=n;
    while(l<=r){
        int mid=(l+r)/2;
        if(an[mid]==x)
            return mid;
        else if(an[mid]<x)
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>q;
    for(int i=1;i<=n;++i)
        cin>>an[i];
    while(q--){
        cin>>t>>x;
        kq=bs(n,x);
        if(kq==-1)
            cout<<-1<<'\n';
        else if(t==1)
            cout<<"YES"<<'\n';
        else if(t==2){
            while(an[kq-1]==x)
                kq--;
            cout<<kq<<'\n';
        }
        else{
            while(an[kq+1]==x)
                kq++;
            cout<<kq<<'\n';
        }
    }
}
