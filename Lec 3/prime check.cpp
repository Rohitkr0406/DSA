#include <iostream>
using namespace std;

int main() 
{
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  int s=0;

  int i=2;
  while(i<n)
    {
      if(n % i == 0)
        s++;
      else
        i++;
    }
if(s==0)
  cout<<"Prime";
  else
  cout<<"Not Prime";
}