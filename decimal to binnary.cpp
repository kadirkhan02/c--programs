 #include<iostream>
 #include<bits/std.c++>
using namespace std;
int sol(int n)
{  int rem=0,ans=0,x=1;
  while(n>0)
  {
  	rem=n%2;
  	n=n/2;
  	ans=ans*10 + rem;
  	
  	
  	
  	
  }
  return ans; 
}
int decimaltobinary(int n)
{
	int x=1,ans=0;
	while(x<=n)
	  x*=2;
	x/=2;
	while(x>0)
	{
		int d=n/x;
		n-=d*x;
		x/=2;
		ans=ans*10 + d;
		
	}
	return ans;
 	
} 
int decimaltoocta(int n)
{
	int x=1,ans=0;
	while(x<=n)
	  x*=8;
	x/=8;
	while(x>0)
	{
		int d=n/x;
		n-=d*x;
		x/=8;
		ans=ans*10 + d;
		
	}
	return ans;
 	
}
string decimaltoocta(int n)
{
	int x=1;
	string ans=" ";
	while(x<=n)
	  x*=16;
	x/=16;
	while(x>0)
	{
		int d=n/x;
		n-=d*x;
		x/=8;
		if(d>=9)
		{
			ans=ans+to_string(d);
		}
		else
		{
			char c='A'+d-10;
			ans.push_back(c);
		}
		
	}
	return ans;
 	
}
int main()
{
	int n;
	cin>>n;
	cout<<decimaltobinary(n);
}

