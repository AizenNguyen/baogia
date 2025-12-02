#include<iostream>
using namespace std;
short x,an[1003];
int n,c=0;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    while(n--){
        cin>>x;
        an[x]++;
    }
    for(auto x:an)
        if(x>1)
          c+=1LL*x*(x-1)/2;
    cout<<c;
}
