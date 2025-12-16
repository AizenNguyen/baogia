#include<bits/stdc++.h>
using namespace std;
mt19937 rd(time(0));
mt19937 rdll(time(0));
int Rand(int l,int r){
    return l+rd()%(r-l+1);
}
long long Randll(long long l,long long r){
    return l+rd()%(r-l+1);
}
void sinh(){
    ofstream cout("sinh.inp");
    int n=Rand(300000,300000);
    cout<<n<<'\n';
    for(int i=1;i<=n;++i)
        cout<<Randll(1000000,3000000)<<" ";
}
int main(){
    for(int i=1;i<=1000000;++i){
        sinh();
        system("trau");
        system("thuat");
        if(system("fc sinh.out sinh.ans")){
            cout<<"Ngu\n";
            break;
        }
        cout<<"Correct\n";
    }
}
