#include<iostream>
#include<algorithm>
using namespace std;
int n,x,y;
long long res=0;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    int ax[n],ay[n],px[n],py[n];
    px[0]=py[0]=0;
    for(int i=0;i<n;++i)
        cin>>ax[i]>>ay[i];
    sort(ax,ax+n);
    sort(ay,ay+n);
    for(int i=1;i<n;++i){
        px[i]=abs(px[i-1]+ax[i]-ax[i-1]);
        py[i]=abs(py[i-1]+ay[i]-ay[i-1]);
        res+=abs(px[i]+py[i])+abs(ax[i]-ax[i-1])+abs(ay[i]-ay[i-1]);
    }
    res-=abs(ax[1]-ax[0])+(ay[1]-ay[0]);
    if(n>2)
        for(int i=1;i<n-2;++i){
            res+=abs(px[i]-px[i+2])+abs(py[i]-px[i+2])+abs(px[i]-px[n-1])+abs(px[i]-px[n-1]);
            cout<<abs(px[i]-px[i+2])<<" ";
    }
    cout<<res;
}
