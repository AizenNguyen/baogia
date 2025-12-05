#include<iostream>
#include<algorithm>
using namespace std;
short t;
int n,q,x,index,l,r;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>q;
    int an[n];
    for(int i=0;i<n;++i)
        cin>>an[i];
    while(q--){
        cin>>t>>x;
        if(t==1){
            if(x>an[n-1]){
                cout<<-1<<'\n';
                continue;
            }
            if(x==an[n-1]){
                if(x==an[n-2]){
                    cout<<x<<'\n';
                    continue;
                }
                cout<<-1<<'\n';
                continue;
            }
            auto it=lower_bound(an+1,an+n+1,x);
            cout<<*it<<'\n';
        }
        else if(t==2){
            if(x==an[n-1]||x>an[n-1]){
                cout<<-1<<'\n';
                continue;
            }
            auto it=upper_bound(an,an+n,x);
            cout<<*it<<'\n';
        }
        else if(t==3){
            if(x<an[0]){
                cout<<-1<<'\n';
                continue;
            }
            auto it=upper_bound(an+1,an+n+1,x-1);
            if(*it==x){
                cout<<x<<'\n';
                continue;
            }
            index=it-an;
            if(index!=0)
                cout<<an[index-1]<<'\n';
        }
        else if(t==4){
            if(x<an[0]){
                cout<<-1<<'\n';
                continue;
            }
            auto it=upper_bound(an+1,an+n+1,x-1);
            index=it-an;
            if(index!=0)
                cout<<an[index-1]<<'\n';
            else
                cout<<-1<<'\n';
        }
        else{
            auto it=upper_bound(an+1,an+n+1,x);
            r=it-an;
            r--;
            it=upper_bound(an+1,an+n+1,x-1);
            l=it-an;
            l+1;
            cout<<r-l+1<<'\n';
        }
    }
}
