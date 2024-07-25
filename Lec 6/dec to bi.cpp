#include <iostream>
#include <math.h>
using namespace std;

int main() {
  cout << "Enter the no. to convert to \nbinary number :  ";
  int n;
  cin >> n;
  
  float ans = 0;
  int i=0;
  while (n != 0)
    {
      int bit = (n&1);
      ans = (bit * pow(10,i)) + ans;
      n=n>>1;
      i++;
      
    }

  cout<<"Binary number: "<< ans;
  
  
  
}