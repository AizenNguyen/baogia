#include<iostream>
using namespace std;
int n,x[21];
void sinh(){
  for(int i=1;i<=n;++i)
    cout<<x[i];
  cout<<'\n';
}
void Try(int pos){
  for(int i=0;i<=1;++i){
    x[pos]=i;
    if(pos==n)
      sinh();
    else
      Try(pos+1);
  }
}
int main(){
  cin>>n;
  Try(1);
}