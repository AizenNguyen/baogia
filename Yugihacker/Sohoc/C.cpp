#include<iostream>
#include<map>
#pragma GCC optimize("unroll-loops")
using namespace std;
long long n;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    map<int,short> mp;
    while(n%2==0){
        n/=2;
    	mp[2]++;
    }
    for(int i=3;i<=100000000;i+=2)
        while(n%i==0){
            n/=i;
            mp[i]++;
        }
    if(mp.size()==0){
        cout<<1<<'\n'<<n<<" "<<1;
        return 0;
    }
    cout<<mp.size()<<'\n';
    for(pair<int,short> x:mp)
        cout<<x.first<<" "<<x.second<<'\n';
}

//Cach 2: 6k+1