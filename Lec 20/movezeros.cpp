#include <iostream>
#include <vector>
using namespace std;

void movezeros(vector<int>& nums) {
    int n = nums.size();
    int i = 0;
    int j = 0;
    while (j < n) {
        if (nums[j] != 0) {
            swap(nums[i], nums[j]);
            i++;
        }
        j++;
    }

}

int main() {
    vector<int> nums1 = {6, 0, 3, 0, 7, 4, 0, 0, 9};

    movezeros(nums1);

    for (int i : nums1) {
        cout << i << " ";
    }
    return 0;
}


/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero
 elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1*/