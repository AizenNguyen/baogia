#include<iostream>
using namespace std;
long long x,y;
void sub1(){
    short c=0;
    for(short a=1;a<=y-1;++a){
        for(short b=a+1;b<=y;++b)
            if(a+b==y)
                if(x%a==0&&x%b==0)
                    cout<<a<<" "<<b<<'\n';
    }
    cout<<c;
}
void sub2(){
    int c=0;
    for(int a=1;a<=y/2;++a)
        if(x%a==0&&x%(y-a)==0)
            c++;
    cout<<c;
}
int main(){
    freopen("sinh.inp","r",stdin);
    freopen("sinh.ans","w",stdout);
    cin>>x>>y;
    sub2();
}
