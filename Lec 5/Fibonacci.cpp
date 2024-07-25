#include <iostream>
using namespace std;

int main() {
  cout << "Enter the range of Fibonacci series\n";
  int n;
  cin >> n;

  int a = 0, b = 1, sum;
  cout << a << " " << b << " ";

  for (int i = 1; i <= n; i++)
    {
      sum= a+b;
      cout<<sum<<" ";
      a=b;
      b=sum;
    }
}