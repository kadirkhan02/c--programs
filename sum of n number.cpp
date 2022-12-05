#include<iostream>
using namespace std;
int sol(int n)
{
	int a=(n*(n+1))/2;
	return a;
}
int main()
{
	int n;
	cin>>n;
	cout<<sol(n);
}

