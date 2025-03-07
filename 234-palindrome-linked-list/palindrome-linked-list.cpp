/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool checkpalindrone(vector<int> arr){
        int l = arr.size();
        for(int i = 0; i< l/2; i++){
            if(arr[i] != arr[l-i-1]) return false;
        }
        return true;
    }

    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        
        ListNode* temp = head;
        int i= 0;
        while(temp){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        return checkpalindrone(arr);  
    }
};