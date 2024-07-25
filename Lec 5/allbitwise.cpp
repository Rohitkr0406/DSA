#include <iostream>
using namespace std;

int main() {
  cout << "Bitwise Operations\n";

  int a = 5;
  int b = 1;

  cout << "a & b : " << (a&b) << endl;
  cout << "a | b : " << (a|b) << endl;
  cout << "a ^ b : " << (a^b) << endl;
  cout << "~a : " << (~a) << endl;
  cout << "a << 1 : " << (a<<1) << endl;
  cout << "a >> 1 : " << (a>>1) << endl;

  cout<<endl<<"urany operators"<<endl;
  cout << "a++ : " << (a++) << endl;
  cout << "a-- : " << (a--) << endl;
  cout << "++a : " << (++a) << endl;
  cout << "--a : " << (--a) << endl;
}