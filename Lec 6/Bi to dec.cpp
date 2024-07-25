#include <iostream>
#include <math.h>
using namespace std;


int main() {
  cout << "Enter a binary number to convert into \ndecimal: ";
  int n;
  cin>>n;
  long ans=0;
  int i=0;

  while(n!=0)
    {
      int bit=n%10;
      ans=(bit*pow(2,i))+ans;
      n=n/10;
      i++;
    }
  cout<<"The following decimal number is: " <<ans<<endl;
}