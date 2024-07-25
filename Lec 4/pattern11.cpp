#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of the pattern";
    int n;
    cin>>n;

    cout<<"pattern 11"<<endl;
      for(int i=1;i<=n;i++)
        {
          for(int j=0;j<i;j++)
            {
              cout<<i-j<<"\t";
            }
          cout<<endl;
        }
}