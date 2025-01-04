#include <iostream>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{   
   for(int i=0; i<n-1; i++)
   {
       int minindex =i;
       for(int j=i; j<n ; j++)
       {
           if(arr[minindex] > arr[j])
            minindex = j;
       }
       swap(arr[minindex],arr[i]);
   }
}