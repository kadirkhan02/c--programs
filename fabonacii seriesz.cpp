#include<iostream>
#include<math.h>
using namespace std;
void sol (int i)
{   int t1=0;
    int t2=1;
    int sum;
	for(int j=1;j<=i;j++)
	{   cout<<t1<<" ";
		sum=t1+t2;
		t1=t2;
		t2=sum ;	
	}

	
}

int main(){
	int n;
	cin>>n;
	sol(n);

	
	 
}
