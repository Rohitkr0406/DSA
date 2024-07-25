#include <iostream>
using namespace std;

int main() {
  
  cout << "Enter the end of the range: ";
  int n;
  cin >> n;

  int sum = 0;
  int i=1;
  while (i<=n) {
    if(i%2==0) {
      sum = sum + i;
    }
    i++;
  }

  cout << "The sum of even numbers from 1 to " << n << " is \n" << sum << endl;
}