#include<iostream>
#include<algorithm>
using namespace std;
short n,x,y,ans;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    freopen("SQUARE.INP","r",stdin);
    freopen("SQUARE.OUT","w",stdout);
    cin>>n;
    short ax[n],ay[n];
    for(short i=0;i<n;++i)
        cin>>ax[i]>>ay[i];
    short maxx=*max_element(ax,ax+n)-*min_element(ax,ax+n);
    short maxy=*max_element(ay,ay+n)-*min_element(ay,ay+n);
    ans=(maxx>=maxy?maxx*maxx:maxy*maxy);
    cout<<ans;
}
