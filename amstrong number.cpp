#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,r=0,d=0,c=0,a=0;
	cin>>n;
	a=n;
	while(n> 0)
	{
		r=n%10;
		c=c+pow(r,3);
		n=n/10;
		
		
	}
	if(c==a)
	cout<<"yes";
	else
	cout<<"no"<<endl;
}
