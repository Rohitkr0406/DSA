#include <iostream>
using namespace std;

int findpivot(int arr[], int s)
{
    int start= 0;
    int end= s-1;
    
    if (arr[start] <= arr[end])
        {
            return start;
        }

    while(start <= end)
    {
        int mid= start + (end -start)/2;

        if(mid < end && arr[mid] > arr[mid + 1])
            return mid + 1;
        
        if(mid > start && arr[mid] <arr[mid -1])
            return mid ;
        
        if(arr[mid] >= arr[start])
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;

}

int main() {
    int arr[]= {8,9,12,13,3,5,7};
    int n= sizeof(arr)/sizeof(arr[0]);

    int pivot= findpivot(arr,n);
    cout<<"Pivot element is :"<<arr[pivot]<<" at index: "<<pivot<< endl;
    return 0;
}