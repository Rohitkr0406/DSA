#include<algorithm>
#include<vector>
#include<iostream>

using namespace std;

bool isPossibleSolution(vector<int> &stalls, int k, int mid) {
    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i=0; i<stalls.size(); i++) {
		if (stalls[i]-lastPos >= mid) {
            cowCount++;
            if (cowCount == k) {
                return true;
            }
            lastPos = stalls[i];
		}
	}
	return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int e = *max_element(stalls.begin(), stalls.end());
    int ans = -1;
    int mid = s + (e-s)/2;

    while (s<=e) {
        if (isPossibleSolution(stalls, k, mid)) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main() {
    int n, k;

    // Input the number of stalls and cows
    cout << "Enter the number of stalls: ";
    cin >> n;

    cout << "Enter the number of cows: ";
    cin >> k;

    vector<int> stalls(n);
    
    // Input the positions of the stalls
    cout << "Enter the positions of the stalls: ";
    for (int i = 0; i < n; i++) {
        cin >> stalls[i];
    }

    // Call the function and print the result
    int result = aggressiveCows(stalls, k);
    cout << "The largest minimum distance is: " << result << endl;

    return 0;
}
