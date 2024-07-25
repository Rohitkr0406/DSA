#include <iostream>
using namespace std;


int alswap(int arr[],int s)
{
  for(int i=0;i<s-1;i+=2)
    {
      swap(arr[i],arr[i+1]);
      
    }
  return 0;
}

int main() 
{
  int arr[100];
  cout << "Enter the size of the array: ";
  int s;
  cin >> s;

  while(s>=100 || s<0)
    {
      cout<<"Size out of limit,Re-enter: ";
      cin>>s;
        
    }

  cout<<"Enter the elements of the array:\n";
  for(int i=0;i<s;i++)
    {
      cin>>arr[i];
    }

  alswap(arr,s);
  
  cout<<"The alternate swapped array is:\n";
  for(int i=0;i<s;i++)
    {
      cout<<arr[i]<<" ";
    }
}