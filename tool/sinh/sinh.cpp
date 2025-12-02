#include<bits/stdc++.h>
#define file "test"
using namespace std;
mt19937 rd(time(0));
int Rand(int l,int r){
    return l+rd()%(r-l+1);
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen(file".inp","r",stdin);
    freopen(file".ans","w",stdout);
    ofstream inp(file".inp");
    inp<<Rand(10,100);
}
