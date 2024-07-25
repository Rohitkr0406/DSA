#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the size of the array";
    int n;
    cin>>n;

      cout<<"pattern 9"<<endl;
  int m=1;
  for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=i;j++)
        {
          cout<<m<<"\t";
          m++;
        }
      cout<<endl;
    }
}