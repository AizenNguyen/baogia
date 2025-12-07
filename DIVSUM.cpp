#include<iostream>
using namespace std;
unsigned int x,y;
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
    if(max(x,y)<=1000000)
        sub2();
}
