#include <iostream>
using namespace std;

int main() {
  cout << "Enter the amount for counting \nthe no. of notes: ";
  int n;
  cin>>n;

  

  switch(1)
    {
      case 1: 
        cout<<"100 rupee notes: "<<n/100<<endl;
        n=n%100;

      case 2:
        cout<<"50 rupee notes: "<<n/50<<endl;
        n=n%50;

      case 3:
        cout<<"20 rupee notes: "<<n/20<<endl;
        n=n%20;

      case 4:
        cout<<"1 rupee notes: "<<n/1<<endl;
        n=n%1;
    }

  return 0;
} 