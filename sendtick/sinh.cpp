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
<<<<<<< HEAD
    int a=Rand(100000,100000);
    cout<<a<<'\n';
    //long long n=Randll(1,100);
    for(int i=0;i<a;++i)
        if(i%2==0)
            cout<<1<<" ";
        else
            cout<<1000000<<" ";
=======
    int n=Rand(6000,7000);
    //long long n=Randll(1,10000000000);
    cout<<n<<'\n';
    for(int i=0;i<n;++i)
    cout<<Rand(80000000, 900000000)<<" ";
>>>>>>> c20bd841c7890bcdf5317f55a6abfcb634c7c099
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
