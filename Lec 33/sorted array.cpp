#include<iostream>
using namespace std;

bool is_sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    if(arr[0]<arr[1] && is_sorted(arr+1,n-1))
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(is_sorted(arr,
    n))
    {
        cout<<"The array is sorted."<<endl;
    }
    else
    {
        cout<<"The array is not sorted."<<endl;
    }
}