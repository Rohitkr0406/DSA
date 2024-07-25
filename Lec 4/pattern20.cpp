#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;

    cout<<"pattern 20"<<endl;
      for(int i=1;i<=n;i++)
        {
          int space=n-i;
          while(space)
            {
              cout<<"\t";
              space--;
            }
          for(int j=1;j<=i;j++)
            {
              cout<<"*\t";
            }
          cout<<endl;
        }
    
}