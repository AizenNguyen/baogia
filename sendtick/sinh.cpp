#include<bits/stdc++.h>
using namespace std;
mt19937 rd(time(0));
mt19937_64 rdll(time(0));
int Rand(int l,int r){
    return l+rd()%(r-l+1);
}
long long Randll(long long l,long long r){
    return l+rdll()%(r-l+1);
}
void sinh(){
    ofstream cout("sinh.inp");
    int a=Rand(101,500),b=Rand(2000,10000);
    //long long n=Randll(1,10000000000);
    cout<<a<<" "<<b<<'\n';
}
int main(){
    for(int i=1;i<=1000000;++i){
        sinh();
        system("thuat");
        system("trau");
        if(system("fc sinh.out sinh.ans")){
            cout<<"Wrong";
            break;
        }
        cout<<"Correct\n";
    }
}
