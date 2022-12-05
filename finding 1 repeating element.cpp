#include<iostream>
#include<climits>
using namespace std;

int main()
{   int n;
    cin>>n;
     int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	const int m=1e6+2;
	int idx[m];
	for(int i=0;i<m;i++)
	{
		idx[i]=-1;
	}
	int mx=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(idx[a[i]]!=-1)
		{
			mx=min(mx,idx[a[i]]);
		}
		else
		{
		
		idx[a[i]]=i;
	}
    } 
	if(mx==INT_MAX)
	{
		cout<<-1<<endl;
	}
	else
	  cout<<mx+1;
	
	

} 
