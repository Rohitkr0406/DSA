#include <bits/stdc++.h>
using namespace std;

// Function to find triplets that sum up to K
vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end()); // Sort the array to use two-pointer approach

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) continue; // Skip duplicates for first element
        int left = i + 1, right = n - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == K) {
                ans.push_back({arr[i], arr[left], arr[right]});
                // Skip duplicates for second and third elements
                while (left < right && arr[left] == arr[left + 1]) left++;
                while (left < right && arr[right] == arr[right - 1]) right--;
                left++;
                right--;
            } else if (sum < K) {
                left++;
            } else {
                right--;
            }
        }
    }

    return ans;
}

int main() {
    int n, K;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum (K): ";
    cin >> K;

    vector<vector<int>> triplets = findTriplets(arr, n, K);

    if (triplets.empty()) {
        cout << "NO triplets found"; // Output -1 if no triplets found
    } else {
        cout << "Triplets with sum " << K << " are:\n";
        for (const auto& triplet : triplets) {
            for (int num : triplet) {
                cout << num << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
