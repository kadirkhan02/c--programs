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
	int m,o;
	cin>>m>>o;
	int n=sol(m);
	int r=sol(o);
	int c=sol(m-o);
	cout<<n/(r*c);

	
	 
}
