#include <iostream>
using namespace std;


int revarr(int arr[],int s )
{
  int start=0;
  int end=s-1;
  while(start<=end)
    {
      swap(arr[start],arr[end]);
      start++;
      end--;
    }

  return 0;
}

int main() 
{
  int arr[100];
  int s;
  cout<<"Enter the size of the array";
  cin>>s;

  while(s>=100 || s<0)
    {
      cout<<"Size out of limit,Re-enter: ";
      cin>>s;
        
    }

  cout<<"Enter the elements of the array: ";
  for(int i=0;i<s;i++)
    {
      cin>>arr[i];
    }

  revarr(arr,s);
  
  cout<<"The reversed array is: ";
  for(int i=0;i<s;i++)
    {
      cout<<arr[i]<<" ";
    }
}