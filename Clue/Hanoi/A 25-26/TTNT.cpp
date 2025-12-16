#include<iostream>
using namespace std;
bool last=1;
int x,s,t;
long long sum=0;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    //freopen("TTNT.INP","r",stdin);
    //freopen("TTNT.OUT","w",stdout);
    cin>>x>>s>>t;
    for(int i=1;sum<t;i++){
        if(i&1){
            sum+=x;
            last=1;
        }
        else{
            sum+=s;
            last=0;
        }
    }
    cout<<last;
}
// var x,s,t:longint;sum:int64;last:boolean;i:longint;
// begin
//  read(x,s,t);
//  sum:=0;last:=true;i:=1;
//  while sum<t do
//   begin
//    if(i and 1=1)then begin sum:=sum+x;last:=true;end
//    else begin sum:=sum+s;last:=false;end;
//    inc(i);
//   end;
//  if(last)then write(1)else write(0);
// end.
