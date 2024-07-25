#include <iostream>
using namespace std;

int main()
{
    int n;
  cout<<"enter size of pattern: ";
  cin>>n;

  
  cout<<"\n\n";
  cout<<"pattern 3"<<endl;
  int i=1;
  for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=n;j++)
        {
          cout<<j<<" ";
        }
      cout<<endl;
    }
}