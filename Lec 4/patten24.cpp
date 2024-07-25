#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
cout<<"pattern 24"<<endl;
  for(int i=1;i<=n;i++)
    {
      int space=n-i;
      while(space)
        {
          cout<<"\t";
          space--;
        }
      
      int j=1;
      while(j<=i)
        {
          cout<<j<<"\t";
          j++;
        }

      
      int value=i-1;
      while(value)
        { 
          cout<<value<<"\t";
          value--;
        }
      cout<<endl;
    }
}

