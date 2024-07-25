#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of the array";
    int n;
    cin>>n;

     cout<<"pattern 15"<<endl;
      for(int i=1;i<=n;i++)
        {
          for(int j=1;j<=n;j++)
            {
              char ch = 'A'+i+j-2;
              cout<<ch<<" ";
              ch++;
            }
          cout<<endl;
        }
    
      //another way of making pattern 15
    
      cout<<"\n\n";
      cout<<"pattern 15"<<endl;
      for(int i=0;i<n;i++)
        {
          for(int j=0;j<n;j++)
            {
              char ab = 'A'+i+j;
              cout<<ab<<" ";
            }
          cout<<endl;
        }
}