#include <bits/stdc++.h>
using namespace std;

// Function to find the intersection of two arrays
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
    int i = 0, j = 0;
    vector<int> ans;

    // Use two pointers to traverse both arrays
    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]); // Add the common element
            i++;
            j++;
        } 
        else if (arr1[i] < arr2[j]) {
            i++; // Move the pointer in the first array
        } 
        else {
            j++; // Move the pointer in the second array
        }
    }
    return ans;
}

int main() {
    // Input size and elements for the first array
    int n, m;
    cout << "Enter the size of the first array: ";
    cin >> n;
    vector<int> arr1(n);
    cout << "Enter the elements of the first sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    // Input size and elements for the second array
    cout << "Enter the size of the second array: ";
    cin >> m;
    vector<int> arr2(m);
    cout << "Enter the elements of the second sorted array: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

     // Sort both arrays
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    // Find the intersection
    vector<int> result = findArrayIntersection(arr1, n, arr2, m);

    // Output the result
    cout << "Intersection of the two arrays is: ";
    if (result.empty()) {
        cout << "No common elements" << endl;
    } else {
        for (int val : result) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
