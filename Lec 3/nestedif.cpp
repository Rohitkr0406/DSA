#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a>0)
    {
        cout<<"a is +ve";
    }
    else
    {
        if(a==0)
        {
            cout<<"a is zero";
        }
        else
        {
            cout<<"a is -ve";
        }
    }
    return 0;
}