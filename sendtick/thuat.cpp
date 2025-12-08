#include<iostream>
using namespace std;
unsigned int x,y;
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
void sub3(){
    unsigned int c=0;
    for(int a=1;a*a<=y;++a)
        if(x%a==0&&x%(y-a)==0){
            if(x/a!=a&&x/(y-a)!=y-a)
                c++;
            c++;
        }
    cout<<c;
}
int main(){
    //freopen("sinh.inp","r",stdin);
    //freopen("sinh.out","w",stdout);
    cin>>x>>y;
    sub2();
}
