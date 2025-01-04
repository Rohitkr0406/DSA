#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int mid) {
    int dayCount = 1;
    int timeSum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > mid) {
            return false; // If a chapter takes more time than `mid`, it's not possible.
        }

        if (timeSum + arr[i] <= mid) {
            timeSum += arr[i];
        } else {
            dayCount++;
            if (dayCount > m) {
                return false; // More days needed than allowed.
            }
            timeSum = arr[i]; // Start new day with current chapter.
        }
    }
    return true;
}

int allocateBooks(vector<int>& arr, int n, int m) {
    int start = 0;
    int end = 0;
    for (int i = 0; i < n; i++) {
        end += arr[i]; // Sum of all chapters (maximum bound).
    }

    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1; // Try for smaller maximum time.
        } else {
            start = mid + 1; // Increase the allowed maximum time.
        }
    }
    return ans;
}

int main() {
    cout << "Enter the number of chapters: ";
    int n;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the time required for each chapter:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of days: ";
    int m;
    cin >> m;

    int result = allocateBooks(arr, n, m);
    cout << "The minimal maximum time for which Ayush studies in a day is: " << result << endl;
    return 0;
}
