#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	int m=1e6+2;
	bool idx[m];
	for(int i=0;i<m;i++)
	{
		idx[i]=false;
	}
	int ans=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0)
		{
			idx[a[i]]=true;
		}
	}
	for(int i=1;i<n;i++){
		if(idx[i]==false)
		{
			ans=i;
			break;
		}
	}
	cout<<ans;
	
}
