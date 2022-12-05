#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int key;
	cin>>key;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int r=0,c=m-1;
	bool flag=false;
	while(n>r && c>=0)
	{
		if (key==a[r][c])
		{
			flag = true;
			break;
			
		}
		else if (key>a[r][c])
		{
			r++;
		}
		else
		 c--;
	}
	if(flag)
	{
		cout<<"yes found";
	}
	else
	cout<<"not found";
}
	
