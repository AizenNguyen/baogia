#include<iostream>
#include<ctime>
using namespace std;
int n,k,c=0,xau[100005];
void sinh(){
    cout<<"(";
    for(int i=1;i<k;++i)
        cout<<xau[i]<<",";
    cout<<xau[k]<<")\n";
    c++;
}
void back(int pos,int start){
    for(int i=start;i<=n;i++){
        xau[pos]=i;
        if(pos==k)
            sinh();
        else
            back(pos+1,i+1);
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("SILICON.INP","r",stdin);
    //freopen("SILICON.OUT","w",stdout);
    cin>>n>>k;
    back(1,1);
    cout<<c;
}
