#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"a is greater";

        }
        else{
            cout<<"c is greater";
        }
    }
    else if(b>a)
    {
        if(a>c)
        {
            cout<<"a is greater";

        }
        else{
            cout<<"c is greater";
        }
        
    }
    else
    {
        cout<<"c is greater";
    }

}
