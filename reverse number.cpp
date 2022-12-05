#include<iostream>
using namespace std;
int main(){
	int n,r=0,d=0,c=0;
	cin>>n;
	
	while(n> 0)
	{
		r=n%10;
		c=c*10+r;
		n=n/10;
		
		
	}
	cout<<c;
}
