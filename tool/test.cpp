#include<iostream>
#include<algorithm>
#include<vector>
#include<chrono>
using namespace std;
short n;
int s,c=0;
void solve1(){ //
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    auto start = chrono::steady_clock::now();
    cin>>n;
    int a[n];
    vector<int> lt={2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};
    for(short i=0;i<n;++i){
        cin>>a[i];
        for(short j=0;j<i;++j)
            if(binary_search(lt.begin(),lt.end(),a[i]+a[j]))
                c++;
    }
    cout<<c;
     auto end = chrono::steady_clock::now();
     auto diff = end - start;
cerr << "Runtime: " << chrono::duration <double> (diff).count() << " seconds" << endl;
}
