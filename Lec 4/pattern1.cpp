#include <iostream>
using namespace std;

int main()
{
    int n;
  cout<<"enter size of pattern: ";
  cin>>n;

  
  cout<<"\n\n";
  cout<<"pattern 1"<<endl;
  int i=1;
  while(i<=n)
    {
      int j=1;
      while(j<=n)
        {
          cout<<"*\t";
          j++;
        }
      cout<<endl;
      i++;
    }
}