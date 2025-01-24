#include<iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s+(e-s)/2;

    int left_size = mid-s+1;
    int right_size = e-mid;

    //Create two arrays
    int *left = new int[left_size];
    int *right = new int[right_size];
    //Copy the elements of the array into the two arrays
    for(int i=0;i<left_size;i++)
    {
        left[i] = arr[s+i];
    }
    for(int i=0;i<right_size;i++)
    {
        right[i] = arr[mid+1+i];
    }

    //Merge the two arrays
    int i=0,j=0,k=s;

    while(i<left_size && j<right_size)
    {
        if(left[i]<right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    //Copy the remaining elements of the left and right arrays
    while(i<left_size)
    {
        arr[k++] = left[i++];
    }
    while(j<right_size)
    {
        arr[k++] = right[j++];
    }

    //Delete the arrays
    delete [] left;
    delete [] right;
}
    

void merge_sort(int *arr, int s, int e)
{
    if(s>=e)
    {
        return;
    }
    int mid = s+(e-s)/2;
    
    //Divide the array into two parts
    merge_sort(arr,s,mid);//Left part
    merge_sort(arr,mid+1,e);//Right part

    //Merge the two parts
    merge(arr,s,e);
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
    
    merge_sort(arr,0,n-1);
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete [] arr;
    return 0;
}