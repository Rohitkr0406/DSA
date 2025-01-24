#include<iostream>
#include<algorithm>
using namespace std;

void bubbleSort(int *arr, int n) {
    if (n == 1 || n == 0) {
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSort(arr, n - 1);
}



int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}