#include <iostream>
using namespace std;


int fibo(int n)
{
  int a= 0;
  int b= 1;

  int tem=0;

  for(int i=2; i<=n-1; i++)
    {
      tem= a+b;
      a=b;
      b=tem;
    }

  return tem;
     
}

int AP(int n)
{
  cout<<"Enter the first term: ";
  int a;
  cin>>a;
  cout<<"Enter the common difference: ";
  int d;
  cin>>d;

  return (a + (n-1)*d);
}

int setbits(int n)
{
  int count = 0;
  while(n)
    {
      if(n&1)
      {
        count++;
      }
      n>>=1;
    }

  return count;
}


int main() 
{
  cout<<"1. Fibonacci series\n2. Nth term of AP\n3. Set bits calculator"<<endl;

  cout<<"\nEnter your choice: ";
  int choice;
  cin>>choice;

  switch(choice)
    {
      case 1:
        {
          cout<<"\nEnter the number of terms: ";
          int n;
          cin>>n;
          int f= fibo(n);
          cout<<f<<endl;
          break;
        }
        

      case 2: 
        {
          cout<<"\nEnter the no. of term: ";
          int nth;
          cin>>nth;
          int ans = AP(nth);
          cout<<ans<<endl;
          break;
        }

      case 3: 
        {
          cout<<"\nEnter the value of a and b: ";
          int a,b;
          cin>>a>>b;
          int c = setbits(a)+setbits(b);
          cout<<c;
          break;
        }

      default: cout<<"\nInvalid choice";

      
    }

  return 0;
}