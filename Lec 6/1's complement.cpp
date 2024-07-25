#include <iostream>
#include <math.h>
using namespace std;

int main() {
  cout << "Enter the decimal no to\ncompliment: ";
  int n;
  cin>>n;

  //1st way
  int ans =0;
  int m=n;
  int i=0;
  while(n!=0)
    {
      int bit = (n&1)^1;
      ans = (bit * pow(10,i)) + ans;
      n = n>>1;
      i++;
    }
  cout<<"\nThe compliment of "<<m<<" is "<<ans<<endl;

  //2nd way love babbar

  
  n = m;
  int mask = 0;
  
  //edge case
  
  if(n == 0)
  {
    cout<<'1'<<endl;
    return 0;
  }
  
  while(m!=0) 
  {
    mask = (mask << 1) | 1;
    m = m >> 1;
  
  }
 
  int  ans2 = (~n) & mask;
  
  cout<<"\nCompliment in decimal: "<<ans2;

  
}


  