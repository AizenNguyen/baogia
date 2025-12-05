#include<iostream>
using namespace std;
short type;
int n,q,l,r,i;
long long x,an[100005],t[400005];
void build(int id,int l,int r){
    if(l==r){
        t[id]=an[l];
        return;
    }
    int mid=(l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    t[id]=min(t[id*2],t[id*2+1]);
}
void update(int id,int l,int r,int pos,long long x){
    if(l==r){
        t[id]+=x;
        return;
    }
    int mid=(l+r)/2;
    if(pos<=mid)
        update(id*2,l,mid,pos,x);
    else
        update(id*2+1,mid+1,r,pos,x);

    t[id]=min(t[id*2],t[id*2+1]);
}
long long get(int id,int l,int r,int u,int v){
    if(v<l||u>r)
        return 1000000000000000000;
    if(u<=l&&r<=v)
        return t[id];
    int mid=(l+r)/2;
    long long tl=get(id*2,l,mid,u,v);
    long long tr=get(id*2+1,mid+1,r,u,v);
    return min(tl, tr);
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>q;
    for(int i=1;i<=n;++i)
        cin>>an[i];
    build(1,1,n);
    while(q--){
        cin>>type;
        if(type==1){
            cin>>i>>x;
            update(1,1,n,i,x);
        }
        else{
            cin>>l>>r;
            cout<<get(1,1,n,l,r)<<'\n';
        }
    }
}
