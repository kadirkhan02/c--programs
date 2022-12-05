#include<iostream>
using namespace std;
bool ischeck(int n,int m,int o)
{
	int a;
	a=max(n,max(m,o));
	int b,c;
	if(n==a)
	{
		b=m;
		c=o;
	}
	else if(m==a)
	{
		b=n;
		c=o;
	}
	else
	{
		b=n;
		c=m;
	}
	if(a*a==b*b+c*c)
	{
		return true;
	}
	else
	return false;
	
}
int main()
{
	int n,m,o;
	cin>>n>>m>>o;
	if(ischeck(n,m,o))
	{
		cout<<"yes";
	}
	else
	cout<<"not a pythogorial ";
}

