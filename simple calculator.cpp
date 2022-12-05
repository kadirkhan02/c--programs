#include<iostream>
using namespace std;
int main()
{
    int a,b;
	char c;
    cin>>a>>b;
    cout<<"which operation u want to perform "<<endl;
    cin>>c;
    switch(c)
    {
    	case '+':
    		cout<<a+b<<endl;
    		break;
    	case '-':
    		cout<<a-b<<endl;
    		break;
    	case '*':
    		cout<<a*b<<endl;
    		break;
    	case '/':
    		cout<<a/b<<endl;
    		break;
    	default:
    		cout<<"wrong choice you have made";
    		
	}
}
