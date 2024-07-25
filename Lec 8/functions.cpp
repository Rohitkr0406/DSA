#include <iostream>
using namespace std;

int power()
{
  int a,b;
  cout<<"Enter the base: ";
  cin>>a;
  cout<<"Enter the exponent: ";
  cin>>b;

  int result=1;
  for(int i=1;i<=b;i++)
    {
      result=result*a;
    }
  
  cout<<"Power: "<<result;

  return 0;
}


void oddeven()
{
  int a;
  cout<<"Enter the number: ";
  cin>>a;

  if(a&1)
    cout<<"\nThe number is odd";
  else
    cout<<"\nThe number is even";
}

int fac(int a)
{
  int result=1;
  
  for(int i=2;i<=a;i++)
    {
      result=result*i;
    }
  return result;
}


void C()
{
  int n,r;
  cout<<"\nEnter the value of n and r\n";
  cin>>n>>r;

  int ncr=fac(n)/(fac(r)*fac(n-r));

  cout<<"The value of ncr is: "<<ncr;
}


int prime()
{
  int a;
  cout<<"Enter the number: ";
  cin>>a;
  
  for(int i=2;i<a;i++)
    {
      if(a%i==0)
      {
        cout<<"The number is not prime";
        return 0;
      }
    }
  cout<<"The number is prime";
  return 0;
}

int main()
{
  int n;
  cout<<"What do you want to do:\n1.Power\n2.Odd/Even\n3.Combination\n4.Prime\n\n"<<endl;

  cout<<"Enter your choice: "; 
  cin>>n;

  switch(n)
    {
      case 1:power();
      break;

      case 2:oddeven();
      break;

      case 3:C();
      break;

      case 4:prime();
      break;
    
      default: cout<<"Invalid input ";
      
    }

  cout<<endl;
}