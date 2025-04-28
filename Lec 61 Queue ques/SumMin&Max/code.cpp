#include<queue>
#include<iostream>
using namespace std;

int SumOfKSubArray(int arr[], int n, int k) {
    int sum = 0;
    priority_queue<int, vector<int>, greater<int>> minHeap; // Min heap for minimum element
    priority_queue<int> maxHeap; // Max heap for maximum element

    int ans = 0;
    for(int i = 0; i < n; i++) {
        minHeap.push(arr[i]);
        maxHeap.push(arr[i]);

        if (i >= k - 1) {
            // Calculate the sum of minimum and maximum elements in the current window
            int minElement = minHeap.top();
            int maxElement = maxHeap.top();
            ans += (minElement + maxElement);

            // Remove the element going out of the window from both heaps
            if (arr[i - k + 1] == minElement) {
                minHeap.pop();
            }
            if (arr[i - k + 1] == maxElement) {
                maxHeap.pop();
            }
        }
    }
    return ans;
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the window size k: ";
    cin >> k;
    int result = SumOfKSubArray(arr, n, k);
    cout << "The sum of minimum and maximum elements in all subarrays of size " << k << " is: " << result << endl;
    return 0;
}

