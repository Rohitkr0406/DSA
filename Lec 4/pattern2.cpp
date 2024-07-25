#include<iostream>
using namespace std;

int main()
{

    cout<<"Enter the size of the pattern";
    int n;
    cin>>n;
    cout<<"pattern 2"<<endl;
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
        {
          cout<<i<<" ";
        }
      cout<<endl;
    }
}