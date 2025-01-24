#include<iostream>
using namespace std;

long long int merge(int *arr, int s, int mid, int e){
    int i = s;
    int j = mid+1;
    int k = s;
    int *temp = new int[e+1];
    long long int inversions = 0;
    while (i<=mid && j<=e)
    {
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            inversions += mid-i+1;
        }
    }
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=e){
        temp[k++] = arr[j++];
    }
    for(int i=s; i<=e; i++){
        arr[i] = temp[i];
    }
    delete [] temp;
    return inversions;
}

long long int merge_sort(int *arr, int s, int e){
    if(s>=e)
        return 0;
    
    int mid = s + (e-s)/2;
    long long int inversions = 0;
    inversions += merge_sort(arr, s, mid);//left half
    inversions += merge_sort(arr, mid+1, e);//right half
    inversions += merge(arr, s, mid, e);//merge the two halves
    return inversions;
}


int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *arr = new int[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    long long int inversions= merge_sort(arr, 0, n-1);
    cout<<"Number of inversions are: "<<inversions<<endl;
}