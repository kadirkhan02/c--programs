#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int mx=INT_MIN;
	int curr=0;
	
	for(int i=0;i<n;i++)
	{  
	  curr+=a[i];
	  if(curr<0)
	  {
	  	curr=0;
	  }
	  mx=max(mx,curr);
		
		
	}
	cout<<mx;
}
