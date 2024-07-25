#include <iostream>
#include <limits.h>

using namespace std;

int main() {
  cout << "Enter the number to reverse: ";
  int n;
  cin>>n;

  int rev=0;
  

  while(n!=0)
    {
      int rem=n%10;
      if(rev>INT_MAX/10 || rev<INT_MIN/10)
      {
        cout<<"Input out of range";
        return 0;
      }
      rev= (rev*10)+rem;
      n=n/10;
      
    }

  cout<<"Reverse of the Number: "<<rev<<endl;
}