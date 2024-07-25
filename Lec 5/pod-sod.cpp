#include <iostream>
using namespace std;

int main() {
  cout << "Enter the number\n";
  int n;
  cin>>n;

  int sum=0;
  int product=1;

  while(n)
    {
      int digit=n%10;
      sum+=digit;
      product*=digit;
      n/=10;
    }

  cout<<"Difference of Product of digits by Sum of digits: "<<product-sum<<endl;
}