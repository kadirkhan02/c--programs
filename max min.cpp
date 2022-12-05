#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int a[10];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	int max_no=INT_MIN;
	int min_no=INT_MAX;
	for(int i=0;i<5;i++)
	{
		max_no=max(max_no,a[i]);
		min_no=min(min_no,a[i]);
	}
	 cout<<min_no<<" "<<max_no<<endl;
}
