#include<iostream>
using namespace std;
bool used[1003];
short x,s;
int n,c=0,an[1003];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>s;
    while(n--){
        cin>>x;
        an[x]++;
    }
    for(short i=1;i<=1000;++i)
        if(!used[i]&&an[i]!=0&&an[s-i]!=0){
            c+=an[i]*an[s-i];
            used[s-i]=1;
        }
    cout<<c;
}
