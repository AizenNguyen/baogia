#include<iostream>
#include<vector>
using namespace std;
unsigned int x,y;
int xi;
short c=0,asize;
vector<int> a;
int main(){
    //freopen("sinh.inp","r",stdin);
    //freopen("sinh.ans","w",stdout);
    cin>>x>>y;
     for(int a=1;a<=y/2;++a)
        if(x%a==0&&x%(y-a)==0)
            c++;
    cout<<c;
}
