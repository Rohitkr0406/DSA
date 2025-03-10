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
    ListNode* reverse(ListNode* head) {

        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;

        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void insertAtTail(ListNode*& head, ListNode*& tail, int val) {

        ListNode* temp = new ListNode(val);
        // empty list
        if (head == nullptr) {
            head = temp;
            tail = temp;
            return;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    ListNode* add(ListNode* l1,ListNode* l2) {
        int carry = 0;

        ListNode* ansHead = nullptr;
        ListNode* ansTail = nullptr;

        while (l1 != nullptr || l2 != nullptr || carry != 0) {

            int val1 = 0;
            if (l1 != nullptr)
                val1 = l1->val;

            int val2 = 0;
            if (l2 != nullptr)
                val2 = l2->val;

            int sum = carry + val1 + val2;
            int digit = sum % 10;

            insertAtTail(ansHead, ansTail, digit);

            carry = sum / 10;
            if (l1 != nullptr)
                l1 = l1->next;

            if (l2 != nullptr)
                l2 = l2->next;
        }
        return ansHead;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);

        ListNode* ans = add(l1, l2);

        ans = reverse(ans);

        return ans;
    }
};
