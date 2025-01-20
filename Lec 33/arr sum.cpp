#include <iostream>
using namespace std;

int arrsum(int *arr,int n)
{
    if(n==0)
        return 0;
    
    return arr[0]+arrsum(arr+1,n-1);

    delete[] arr;

    
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "The sum of the elements of the array is: " << arrsum(arr, n) << endl;

    return 0;
}