#include <iostream>
using namespace std;
long long fib(int n) {
    if (n<=2) return 1;
    long long a=1,b=1,c;
    for (int i=3;i<=n;i++) {
        c=a+b;
        a=b;
        b=c;
    }
    return b%1000000007;
}
int main() {
	freopen("FIBONACCI.INP","r",stdin);
	freopen("FIBONACCI.OUT","w",stdout);
    int n;
    cin>>n;
    cout<<fib(n);
}
