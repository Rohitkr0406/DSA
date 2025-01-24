#include<iostream>
using namespace std;

int exponent(int n,int p)
{
    if(p==0)
    {
        return 1;
    }

    int ans= n*exponent(n,p-1);
    if(p%2==0)
    {
        return ans*ans;
    }
    else
    {
        return n*ans*ans;
    }
    ṇ
}

int main()
{
    int n,p;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter the power"<<endl;
    cin>>p;

    int ans= exponent(n,p);
    cout<<"The result is"<<endl;
    cout<<ans<<endl;
    return 0;
}
