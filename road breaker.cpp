 #include<iostream>
#include<climits>
using namespace std;

int main()
{   int n;
    cin>>n;
	int a[n+1];
	a[n]=-1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int mx=-1;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>mx && a[i+1]<a[i])
		{
			ans++;
		}
		mx=max(a[i],mx);
	}
	cout<<ans<<endl;
	
	

} 
