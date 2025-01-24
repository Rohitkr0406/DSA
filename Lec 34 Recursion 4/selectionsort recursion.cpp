#include<iostream>
#include<algorithm>
using namespace std;

void selection_sort(int arr[],int n)
{
    if(n<=1)
        return;
    
    int min_index=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[min_index])
        {
            min_index=i;
        }
    }
    swap(arr[0],arr[min_index]);
    selection_sort(arr+1,n-1);
}

int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,n);
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}