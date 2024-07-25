#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of the array";
    int n;
    cin>>n;
    
    cout<<"pattern 14"<<endl;
    int i=1;
      char ch='A';
      while(i<=n)
        {
          int j=1;
          while(j<=n)
            {
              cout<<ch<<" ";
              ch++;
              j++;
            }
          cout<<endl;
          i++;
        }
}