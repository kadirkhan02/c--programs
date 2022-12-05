#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s;
	cin>>n>>s;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int l=0;
	int h=n-1;
	while(l<h)
	{
		if(a[l]+a[h]==s)
		{
			cout<<l<<" "<<h<<endl;
			return true;
		}
		else if(a[l]+a[h]<s)
		{
			l++;
		}
		else
		 h--;
	}
	return false;
	
}
