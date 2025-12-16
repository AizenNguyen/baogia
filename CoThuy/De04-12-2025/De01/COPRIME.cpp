#include<iostream>
using namespace std;
bool nt[1000006];
int n,l,r=1,len=1,ans=-1e18,uoc[1000006];
bool check(int a,int b){
    if(nt[a]==0&&nt[b]==0)
        return true;
    if(a%b==0||b%a==0)
        return false;
    else{
        int mi=min(a,b);
        for(int i=2;i<=mi/2;++i)
            if(a%i==0&&b%i==0)
                return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    //freopen("COPRIME.INP","r",stdin);
   // freopen("COPRIME.OUT","w",stdout);
    cin>>n;
    int an[n];
    for(int i=0;i<n;++i)
        cin>>an[i];
    nt[0]=nt[1]=1;
    for(int i=4;i<=1000000;i+=2)
        nt[i]=1;
    for(int i=3;i*i<1000000;i+=2)
        if(!nt[i])
            for(int j=i*i;j<=1000000;j+=i)
                nt[j]=1;
    while(r<n){
        if(check(an[l],an[r])){
            len++;
            l++;
            r++;
        }
        else{
            ans=(ans>=len?ans:len);
            l++;
            r++;
            len=1;
        }
    }
    if(ans==1)
        cout<<0;
    else
        cout<<ans;
}
