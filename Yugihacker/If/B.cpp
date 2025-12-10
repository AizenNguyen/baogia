#include<iostream>
using namespace std;
int main(){
    short a,b,c,d; cin>>a>>b>>c>>d;
    if(b<d){
        swap(a,c);
        swap(b,d);
    }
    if(d<=a)
        cout<<(b-a)+(d-c);
    else if(d<=b){
        if(a<=c)
            cout<<b-a;
        else if(a>=c)
            cout<<(b-a)+(d-c)-(d-a);
    }
}