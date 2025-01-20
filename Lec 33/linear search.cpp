#include <iostream>
using namespace std;

bool linear_search(int *arr, int n, int key) {
    if (n == 0)
        return false;
    if (arr[0] == key)
        return true;
    return linear_search(arr + 1, n - 1, key);
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

    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;

    if(linear_search(arr, n, key))
        cout<<"Element found."<<endl;
    else
        cout<<"Element not found."<<endl;
    return 0;
}