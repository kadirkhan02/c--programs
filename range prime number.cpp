#include<iostream>
using namespace std;
int main()
{
int n,m,i,j;
cin>>n>>m;
for(j=n;j<m;j++)
	{
	
	for( i=2;i<j;i++)
	{

		if(j%i==0)
		{
			break;
		}
		
	}
	if(i==j)
		{
			cout<<j<<endl;
		}
}

}
