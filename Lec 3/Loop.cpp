#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;
    cout<<"Enter the value of n \n";
    cin>>n;
    cout<<"\n";
    int i=1;
    while(i<=n)
    {
      cout<<i<<"\n";
      sum=sum+i;
      i++;
    }
    cout<<"\nSum of 1 to n : "<<sum;
}