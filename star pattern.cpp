#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
    int a=1;
	for(int i=1;i<=n;i++) 
	{   int j;
	
		for( j=0;j<=n-i;j++)
		{
		 
		 	cout<<" ";
		 
	}   
		for(j=1;j<=2*i-1;j++) 
		{
			cout<<"*";
		}
		
		cout<<endl; 
	
	}
	for(int i=n;i>=1;i--) 
	{   int j;
	
		for( j=0;j<=n-i;j++)
		{
		 
		 	cout<<" ";
		 
	}   
		for(j=1;j<=2*i-1;j++) 
		{
			cout<<"*";
		}
		
		cout<<endl; 
	
	}
	
		
	
	
}

