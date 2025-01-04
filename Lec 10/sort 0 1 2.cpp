#include <iostream>
#include <vector>
using namespace std;

// Function to sort the array containing only 0s, 1s, and 2s in a single scan
void sortArray(vector<int>& arr, int n) {
    // Initialize three pointers:
    // low: points to the next position for placing 0
    // mid: current element under consideration
    // high: points to the next position for placing 2
    int low = 0, mid = 0, high = n - 1;

    // Traverse the array until mid pointer crosses high
    while (mid <= high) {
        if (arr[mid] == 0) {
            // If the current element is 0, swap it with the element at the 'low' pointer
            swap(arr[low], arr[mid]);
            low++;  // Increment low as the 0 is placed correctly
            mid++;  // Increment mid to process the next element
        } else if (arr[mid] == 1) {
            // If the current element is 1, it is already in the correct position
            mid++;  // Move to the next element
        } else { // arr[mid] == 2
            // If the current element is 2, swap it with the element at the 'high' pointer
            swap(arr[mid], arr[high]);
            high--; // Decrement high as the 2 is placed correctly
            // Note: Do not increment mid here, as the swapped element needs to be processed
        }
    }
}

int main() {
    int n;
    // Prompt the user to enter the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    // Prompt the user to enter the elements of the array
    cout << "Enter the elements of the array (only 0s, 1s, and 2s): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the function to sort the array
    sortArray(arr, n);

    // Display the sorted array
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
