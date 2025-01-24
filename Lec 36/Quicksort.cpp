#include<iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot= arr[s];//taking the first element as the pivot element
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
    int p = s+count;//index of the pivot element after sorting
    swap(arr[s],arr[p]);//swapping the pivot element with the element at index p

    int i=s,j=e;
    while(i<p && j>p)
    {
        if(arr[i]>pivot && arr[j]<=pivot)
            swap(arr[i++],arr[j--]);
        else{
            if(arr[i]<=pivot)
                i++;
            if(arr[j]>pivot)
                j--;
        }
    }
    return p;

}

void quickSort(int *arr, int s, int e)
{
    if(s>=e)
    {
        return;
    }
    int p = partition(arr,s,e);//p is the index of the pivot element
    quickSort(arr,s,p-1);//sort the left part of the array
    quickSort(arr,p+1,e);//sort the right part of the array
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    quickSort(arr,0,n-1);
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
    return 0;
}