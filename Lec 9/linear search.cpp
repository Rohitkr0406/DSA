#include <iostream>
#include <math.h>

using namespace std;

bool searcharr(int arr[100],int s,int e)
{
  for(int i=0;i<s;i++)
    {
      if(arr[i]==e)
      {
        return 1;
      }
    }
  return 0;
}

int sumarr(int arr[100],int s)
{
  int sum=0;
  for(int i=0;i<s;i++)
    {
      sum+=arr[i];
    }
  
  return sum;
}



int main()
{
  int arr[100];
  int s;
  cout<<"Enter the size of the array: ";
  cin>>s;

  while (s > 100 || s <= 0) 
  { 
        cout << "Invalid size. Please enter a size between 1 and 100: ";
        cin >> s;
  }

  cout<<"Enter the elements of the array: ";
  for(int i=0;i<s;i++)
    {
      cin>>arr[i];
    }

  int e;
  cout<<"Enter the element to search: ";
  cin>>e;

  bool flag= searcharr(arr,s,e);
  if(flag)
    cout<<"Element found"<<endl;
  else
    cout<<"Element not found "<<endl;


  int sarr= sumarr(arr,s);
  cout<<"Sum of the array is: "<<sarr;
  
}