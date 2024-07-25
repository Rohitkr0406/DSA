#include <iostream>
#include <algorithm>
using namespace std;

void printarr(int arr[],int size)
{
  for(int i=0;i<size;i++)
    {
      cout<<arr[i]<<" ";
      
    }
}


int main() {
  int arr[15];
  int n= sizeof(arr)/sizeof(int);
  // for(int i=0;i<n;i++)
  //   {
  //     arr[i]=1;
  //   }

  std::fill(arr, arr + n, 1);
  printarr(arr,n);
    
}