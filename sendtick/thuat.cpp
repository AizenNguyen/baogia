#include<iostream>
#include<vector>
using namespace std;
long long x,y,xi,c=0;
size_t asize;
vector<long long> a;
void solve1(){
    for(int a=1;a<=y/2;++a)
        if(x%a==0&&x%(y-a)==0)
            c++;
    cout<<c;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("sinh.inp","r",stdin);
    //freopen("sinh.out","w",stdout);
    cin>>x>>y;
    for(int i=1;i*i<=x;++i){
        if(x%i==0){
            a.push_back(i);
            xi=x/i;
            if(xi!=i)
                a.push_back(xi);
        }
    }
    asize=a.size();
    for(size_t i=0;i<asize-1;++i){
        if(a[i]>=y)
            continue;
        for(size_t j=i+1;j<asize;++j){
            if(a[i]+a[j]==y)
                    c++;
        }
    }
    cout<<c;
}
