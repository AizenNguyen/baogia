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
    int a=Rand(100000,100000);
    cout<<a<<'\n';
    //long long n=Randll(1,100);
    for(int i=0;i<a;++i)
        if(i%2==0)
            cout<<1<<" ";
        else
            cout<<1000000<<" ";
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
