#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the pattern";
    cin>>n;

     cout<<"pattern 10"<<endl;
      for(int i=1;i<=n;i++)
        {
          int value=i;
          for(int j=1;j<=i;j++)
            {
              cout<<value<<"\t";
              value++;
            }
          cout<<endl;
        }


    //another way of making pattern 10
    
      cout<<"\n\n";
      cout<<"pattern 10"<<endl;
      for(int i=1;i<=n;i++)
        {
          for(int j=0;j<i;j++)
            {
              cout<<i+j<<"\t";
            }
          cout<<endl;
        }
    
}