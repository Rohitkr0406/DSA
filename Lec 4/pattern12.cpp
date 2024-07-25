#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;

    cout<<"pattern 12"<<endl;
      char a='A';
      while(a<=n+64)
        {
          int j=1;
          while(j<=n)
            {
              cout<<a<<" ";
              j++;
            }
          cout<<endl;
          a++;
        }

    //anoher way of making pattern 12
    
      cout<<"\n\n";
      cout<<"pattern 12"<<endl;
      int i=1;
      while(i<=n)
        {
          int j=1;
          while(j<=n)
            {
              char chl='A'+i-1;
              cout<<chl<<" ";
              j++;
            }
          cout<<endl;
          i++;
        }
}