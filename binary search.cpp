 #include<iostream>
#include<climits>
using namespace std;
int binarysearch(int n,int a[],int k)
{   
   
	int first=0;
	int last=n;
	while(first<=last)
	{
		//int mid=(first+last)/2;
		int mid=(first+(last-first))/2;
		if(a[mid]==k)
		{
			return mid ;
		}
		else if(a[mid]>k)
		{
			last=mid-1;
		}
		else
		{
			first=mid+1;
		}
		    
	}
	return -1;
	
}
int main()
{   int n;
    cin>>n;
	int a[n];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	int k;
	cout<<"ENTER KEY\n";
	cin>>k;
	cout<<binarysearch(n,a,k);

}
