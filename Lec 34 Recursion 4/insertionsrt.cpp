#include<iostream>

using namespace std;

void insertion_sort(int arr[],int n)
{
   if(n==1)
    return;
   
   insertion_sort(arr,n-1);
    int temp=arr[n-1];
    int j=n-2;

    while(j>=0 && arr[j]>temp)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
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
    insertion_sort(arr,n);
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}