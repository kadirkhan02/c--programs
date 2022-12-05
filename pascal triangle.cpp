#include<iostream>
#include<math.h>
using namespace std;
int sol (int a)
{   int fac=1; 
	for(int i=2;i<=a;i++)
	{
		fac*=i;
	}
	return fac;
}

int main(){
	int m;
	cin>>m;
	
	for(int i=0;i<m;i++)
	{
	for(int j=0;j<m-i-1;j++)
	{
		cout<<" ";
	}
	for(int j=0;j<=i;j++)
	{
	
	int n=sol(i);
	int r=sol(j);
	int c=sol(i-j);
	cout<<n/(r*c);
}
cout<<endl;
}

	
	 
}
