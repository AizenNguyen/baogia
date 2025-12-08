#include<bits/stdc++.h>
using namespace std;
mt19937 rd(time(0));
mt19937 rdll(time(0));
int Rand(int l,int r){
    return l+rd()%(r-l+1);
}
long long Randll(long long l,long long r){
    return l+rdll()%(r-l+1);
}
void sinh(){
    ofstream cout("sinh.inp");
    long long a=Randll(1000000000,10000000000);
    long long b=Randll(100000000000,1000000000000);
    //long long n=Randll(1,100);
    cout<<a<<'\n'<<b;
}
int main(){
    for(int i=1;i<=100000;++i){
        sinh();
        system("trau");
        system("thuat");
        if(system("fc sinh.out sinh.ans")){
            cout<<"Wrong";
            break;
        }
        cout<<"Correct\n";
    }
}
