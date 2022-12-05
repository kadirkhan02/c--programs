#include<bits/stdc++.h>
using namespace std;
int kadanes(int a[],int n)
{
	int mx=INT_MIN;
	int curr=0;
	
	for(int i=0;i<n;i++)
	{  
	  curr+=(a[i]);
	  if(curr<0)
	  {
	  	curr=0;
	  }
	  mx=max(mx,curr);
		
		
	}
	return mx ;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	} 
	int wrapsum;
	int nonwrapsum;
	nonwrapsum=kadanes(a,n);
	int totalsum=0;
	for (int i=0;i<n;i++)
	{
		totalsum+=a[i];
		a[i]=-a[i];
	}
	wrapsum=totalsum+kadanes(a,n);
	cout<<max(nonwrapsum,wrapsum);
	
	
}
