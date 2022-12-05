#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int i)
{
	for(int j=2;j<=sqrt(i);j++)
	{
		if(i%j==0)
		return false;
		
	}
	return true;
}

int main(){
	int n,m;
	cin>>n>>m;
	for(int  i=n;i<=m;i++)
	{
		if(isprime(i))
		{
			cout<<i<<endl;
		}
	}
	
	 
}
