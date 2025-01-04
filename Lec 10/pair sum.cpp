#include <bits/stdc++.h>
using namespace std;

// Function to find all pairs with a sum equal to S
vector<vector<int>> pairSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;
    // Traverse each element in the array
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            // Check if the sum of the current pair is equal to S
            if (arr[i] + arr[j] == s) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j])); // Add the smaller element first
                temp.push_back(max(arr[i], arr[j])); // Add the larger element next
                ans.push_back(temp);
            }
        }
    }
    // Sort the resulting pairs
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    // Input size of the array and the target sum
    int n, s;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target sum: ";
    cin >> s;

    // Find pairs
    vector<vector<int>> result = pairSum(arr, s);

    // Output the result
    cout << "Pairs with sum " << s << " are:" << endl;
    for (auto &pair : result) {
        cout << pair[0] << " " << pair[1] << endl;
    }

    return 0;
}
