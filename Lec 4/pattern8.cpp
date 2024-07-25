#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of the array";
    int n;
    cin>>n;
    cout<<"\n\n";
      cout<<"pattern 8"<<endl;
      for(int i=1;i<=n;i++)
        {
          for(int j=1;j<=i;j++)
            {
              cout<<i<<" ";
            }
          cout<<endl;
        }
    
}