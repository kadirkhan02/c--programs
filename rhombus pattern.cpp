#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
		 if(j<n-i)
		 {
		 	cout<<" ";
		 }
	}
		for(int k=1;k<=n;k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
		
	
	
}

