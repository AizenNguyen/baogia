#include<iostream>
using namespace std;
unsigned long long a,b;
void solve1(){
    cout<<((b+2)*((b-2)/2+1)-a*((a-4)/2+1))/2;
}
void solve2(){
    cout<<((a+b)*((b-a)/2+1))/2;
}
int main(){
    cin>>a>>b;
    if(a&1)
        a++;
    if(b&1)
        b--;
    //solve1();
    solve2();
}