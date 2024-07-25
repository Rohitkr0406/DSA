#include <iostream>
using namespace std;

int main() {
  cout << "Enter the size of pattern\n";
  int n;
  cin>>n;


  cout<<"\nPattern 1\n\n";
  for(int i=1;i<=n;i++)
    {
      //section 1
      for(int s=1;s<i;s++)
        {
          cout<<"  ";
        }

      //section 2
      for(int j=1;j<=n-i+1;j++)
        {
          cout<<i<<" ";
        }

      cout<<endl;
    }


  cout<<"\nPattern 2\n\n";
  for(int i=1;i<=n;i++)
    {
      //section 1
      for(int s=1;s<=n-i;s++)
        {
          cout<<"  ";
        }

      //section 2
      for(int j=1;j<=i;j++)
        {
          cout<<i<<" ";
        }

      cout<<endl;
    }

  cout<<"\nPattern 3\n\n";
  for(int i=1;i<=n;i++)
    {
      //section 1
      for(int s=1;s<i;s++)
        {
          cout<<"  ";
        }

      //section 2
      int value =i;
      for(int j=1;j<=n-i+1;j++)
        {
          cout<<value<<" ";
          value++;
        }
      
      cout<<endl;
    }


  cout<<"\nPattern 4\n\n";
  int value =1;
  for(int i=1;i<=n;i++)
    {
      //section 1
      for(int s=1;s<=n-i;s++)
        {
          cout<<"\t";
        }

      //section 2     
      for(int j=1;j<=i;j++)
        {
          cout<<value<<"\t";
          value++;
        }
      
      cout<<endl;
    }


  cout<<"\nPattern 5\n\n";
  for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
        {
          if(i==1 || i==n || j==1 || j==n)
          {
            cout<<"*"<<" ";
          }
          else 
          {
            cout<<"  ";
          }
          
        }
      
      cout<<endl;
    }
}