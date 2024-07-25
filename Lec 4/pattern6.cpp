#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of pattern";
    cin>>n;

    cout<<"pattern 6"<<endl;
    int k=1;
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
        {
          cout<<k<<"\t";
          k++;
        }
      cout<<endl;
    }
}