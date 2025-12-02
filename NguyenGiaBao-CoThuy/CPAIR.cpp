#include<iostream>
using namespace std;
bool used[1003];
short x,s,an[1003];
int n,j;
long long c=0;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>s;
    while(n--){
        cin>>x;
        an[x]++;
    }
    for(int i=0;i<=500;++i){
        j=s-i;
        if(j<1||j>1000)
            continue;
        if(i<j)
            c+=1LL*an[i]*an[j];
        else if(i==j)
            c+=1LL*an[i]*(an[i]-1)/2;
    }
    cout<<c;
}
