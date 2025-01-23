#include <iostream>
#include <algorithm>
using namespace std;

bool binary_search(int *arr, int n, int key) {
    if (n == 0)
        return false;

    int mid = n / 2;
    
    if (arr[mid] == key)
        return true;
    
    if (arr[mid] > key)
        return binary_search(arr, mid, key);
    else
        return binary_search(arr + mid + 1, n - mid - 1, key);
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
    
    sort(arr, arr + n);

    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;

    if(binary_search(arr, arr + n, key))
        cout<<"Element found."<<endl;
    else
        cout<<"Element not found."<<endl;
    return 0;
}