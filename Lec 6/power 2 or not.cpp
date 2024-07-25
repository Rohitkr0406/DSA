#include <iostream>
#include <math.h>
using namespace std;

int main() {
  cout << "Enter a number: ";
  int n;
  cin>>n;


  //1st tarika khud se

  bool p= true;
  while (n>1)
    {
      if(n%2!=0 )
      {
        p=false;
        break;
      }
      n=n/2;
    }
  
  if(n==0)
    p= false;

  if(p)
    cout<<"Power of 2";
  else
    cout<<"Not a power of 2";


  //2nd and shorter way chatgpt se
  
  if (n > 0 && (n & (n - 1)) == 0) {
      cout << "\n2 ka power form hai";
  } else {
      cout << "\n2 ka power form nhi hai";
  }

  

  //3rd way of love babbar 
  bool power=false;

  for(int i=0;i<=30;i++)
    {
      if(n==pow(2,i))
        power= true;
    }
  if(power)
    cout<<"\n2 ka power hai";
  else
    cout<<"\n2 ka power nhi hai";
  
  
  return 0;
}