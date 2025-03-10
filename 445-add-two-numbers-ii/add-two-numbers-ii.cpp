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
private:
    ListNode* reverse(ListNode* l){
        ListNode* curr = l;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        while(curr!= nullptr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* rl1 = reverse(l1);
        ListNode* rl2 = reverse(l2);
        
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;
        int carry = 0;

        while(rl1 || rl2 || carry){
            int sum = carry;
            if(rl1){
                sum += rl1->val;
                rl1 = rl1->next;
            }

            if(rl2){
                sum += rl2->val;
                rl2 = rl2->next;
            }
            carry = sum/10;
            temp->next = new ListNode(sum%10);
            temp = temp->next;
        }

        return reverse(dummy->next);
    
    }
};