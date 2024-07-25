#include <iostream>
using namespace std;

int main() {
  cout<<"Sabse khatarnak pattern\n"<<endl;

  int n;
  cout<<"Enter the size of pattern"<<endl;
  cin>>n;
  cout<<endl;
  for(int i=0;i<n;i++)
    {

      //section 1
      for(int j=1;j<=n-i;j++)
        {
          cout<<j<<" ";
        }

      //section 2
      int value= 0;
      while(value<i)
        {
          cout<<"* *"<<" ";
          value++;
          
        }
      
      //section 3
      value= n-i;
      while(value)
        {
          cout<<value<<" ";
          value--;
        }

      cout<<endl;
    }
}