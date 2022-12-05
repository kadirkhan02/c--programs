#include<iostream>
using namespace std;
int sol(int n)
{  int rem=0,ans=0,x=1;
  while(n>0)
  {
  	rem=n%2;
  	ans+=x*rem;
  	x *=8;
  	n=n/10;
  	
  }
  return ans; 
}
int main()
{
	int n;
	cin>>n;
	cout<<sol(n);
}
