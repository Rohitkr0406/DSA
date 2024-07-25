#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
  int a,b;
  char op;
  cout << "Enter the mathematical expression you want to perform\n\n";

  cout<<"First operand\t";
  cin >> a;
  cout<<"Operator     ";
  cin >> op;
  cout<<"Second operand\t";
  cin >> b;

  cout<<"Answer\t=\t";

  switch(op)
    {
      case '+':cout << a+b;
      break;

      case '-':cout << a-b;
      break;

      case '*':cout << a*b;
      break;

      case '/':cout << a/b;
      break;

      case '%':cout << a%b;
      break;

      case '^':cout << pow(a,b);
      break;

      default:cout << "Invalid operator";
      
      
    }

  cout<<endl;
}