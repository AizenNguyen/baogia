#include<iostream>
using namespace std;
int n,c=0;
//int tmp,f1=0,f2=0;
int main(){
    freopen("BPT.INP","r",stdin);
    freopen("BPT.OUT","w",stdout);
    cin>>n;
    //if(n<9){
    //    cout<<0;
    //    return 0;
    //}
    //for(int i=9;i<=n;i+=10){
    //    tmp=i;
    //    while(tmp!=0){
    //        f1+=tmp%10;
    //        tmp/=10;
    //    }
    //    tmp=i+1;
    //    while(tmp!=0){
    //        f2+=tmp%10;
    //        tmp/=10;
    //    }
    //    if(f2<f1)
    //        c++;
    //}
    //cout<<c;
    if(n%10==9)
        c++;
    n-=n%10;
    cout<<c+(n/10);
}
