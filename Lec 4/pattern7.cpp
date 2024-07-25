#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the pattern";
    cin>>n;

      cout<<"pattern 7"<<endl;
      int i=1;
      while(i<=n)
      {
      int j=1;
      while(j<=i)
        {
          cout<<"* ";
          j++;
        }
      cout<<endl;
      i++;
      }
}