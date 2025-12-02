#include<iostream>
#include<algorithm>
using namespace std;
int n,jmax,kmax,anmin=1e9,indexmin;
long long s,res=-2e18;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    int an[n];
    for(int i=0;i<n;++i){
        cin>>an[i];
        if(anmin>an[i]){
            anmin=an[i];
            indexmin=i;
        }
    }
    jmax=*max_element(an,an+indexmin);
    kmax=*max_element(an+indexmin+2,an+n);
    cout<<2*jmax-3*anmin+5*kmax;
}
