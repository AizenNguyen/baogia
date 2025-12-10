#include<iostream>
using namespace std;
short t;
int n,q,x,l,r,mid,c=0,an[100000];
bool check;
int tknp(int l, int r, int t){
    while(l<=r){
        mid=(l+r)/2;
        if(an[mid]==x)
            return mid;
        else if(an[mid]<x)
            r--;
        else
            l++;
    }
    return -1;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>q;
    int an[n];
    for(int i=0;i<n;++i)
        cin>>an[i];
    while(q--){
        cin>>t>>x;
        l=1,r=n;
        check=0;
        if(t==1){
            while(l<=r){
                mid=(l+r)/2;
                if(an[mid]==x){
                    cout<<"YES"<<'\n';
                    check=1;
                    break;
                }
                if(an[mid]>x)
                    r=mid-1;
                if (an[mid]<x)
                    l=mid+1;
            }
            if(check==0)
                cout<<-1<<'\n';
        }
        if(t==2){
            while(l<=r){
                mid=(l+r)/2;
                if(an[mid]==x){
                    while(an[mid-1]==x)
                        mid--;
                    check=1;
                    cout<<mid+1<<'\n';
                    break;
                }
                if(an[mid]>x)
                    r=mid-1;
                if(an[mid]<x)
                    l=mid+1;
            }
            if(check==0)
                cout<<-1<<'\n';
        }
        if(t==3){
            while(l<=r){
                mid=(l+r)/2;
                if(an[mid]==x){
                    while(an[mid+1]==x)
                        mid++;
                    check=1;
                    cout<<mid+1<<'\n';
                    break;
                }
                if(an[mid]>x)
                    r=mid-1;
                if(an[mid]<x)
                    l=mid+1;
            }
            if(check==0)
                cout<<-1<<'\n';
        }
    }
}
