#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;

    cout<<"pattern 21"<<endl;
      for(int i=1;i<=n;i++)
        {
          int j=n-i+1;
          while(j)
            {
              cout<<"*\t";
              j--;
            }
          cout<<endl;
        }
    
}