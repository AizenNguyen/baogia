#include<bits/stdc++.h>
using namespace std;
#define file "SOCHAN"
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)

mt19937 rd(time(0));
mt19937_64 rdl(time(0));

long long Randll(long long l, long long r){
    return l + rdl()%(r-l+1);
}
int Rand(int l, int r){
    return l + rd()%(r-l+1);
}

void sinh(){
    ofstream cout(file".inp");  //

    //int n = Rand(1,10000);
    long long n = Randll(1,100000000);
    cout<<n<<" ";
}

int32_t main(){

    for(int i=1;i<=1000000;++i){
        sinh();
        system(file);  //
        system(file"_trau");  //

        if(system("fc " file".out " file".ans")){  //
            cout<<"wrong";
            break;
        }
        cout<<"correct\n";
    }
    cerr<<"\ntime elapsed: "<<TIME <<"s.\n";
}
//file chính, inp, out, ans tên theo bài
//file trâu tên theo bài + "_trau"
