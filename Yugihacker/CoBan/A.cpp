#include<iostream>
using namespace std;
int main()
{
	short n; cin>>n;
	if(n%400==0||(n%4==0&&n%100!=0))
		cout<<"Yes";
	else
		cout<<"No";
}