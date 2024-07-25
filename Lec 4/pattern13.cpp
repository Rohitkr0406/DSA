#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;

    cout<<"pattern 13"<<endl;
      for(int i=1;i<=n;i++)
        {
          for(char j='A';j<=n+64;j++)
            {
              cout<<j<<" ";
            }
          cout<<endl;
        }

    //anoher way of making pattern 13
    
      cout<<"\n\n";
      cout<<"pattern 13"<<endl;
      int i=1;
      while(i<=n)
        {
          int j=1;
          while(j<=n)
            {
              char chl='A'+j-1;
              cout<<chl<<" ";
              j++;
            }
          cout<<endl;
          i++;
        }
}