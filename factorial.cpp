#include<iostream>
using namespace std;
int sol(int n)
{
	int sum=1;
 for(int i=1;i<=n;i++)
 {
 	 sum=sum*i;
 }
 return sum;
}
int main(){
	int n;
	cin>>n;
	int a=sol(n);
	cout<<a;
	return 0; 
}

