/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
private:
    void insertattail(Node*& head, Node*& tail, int data) {
        Node* n = new Node(data);
        if (head == NULL) {
            head = n;
            tail = n;
            return;
        }
        tail->next = n;
        tail = n;
    }

public:
    Node* copyRandomList(Node* head) {
        Node* clonehead = NULL;
        Node* clonetail = NULL;
        Node* temp = head;

        while (temp != NULL) {
            insertattail(clonehead, clonetail, temp->val);
            temp = temp->next;
        }

        Node* originalnode = head;
        Node* clonenode = clonehead;
        Node* next = NULL;

        while (originalnode != NULL && clonenode != NULL) {
            next = originalnode->next;
            originalnode->next = clonenode;
            originalnode = next;

            next = clonenode->next;
            clonenode->next = originalnode;
            clonenode = next;
        }

        originalnode = head;
        clonenode = clonehead;

        while (originalnode != NULL && originalnode->next != NULL) {
            if (originalnode->random)
                originalnode->next->random = originalnode->random->next;
            else
                originalnode->next->random = NULL;

            originalnode = originalnode->next->next;
        }

        originalnode = head;
        clonenode = clonehead;

        while (originalnode != NULL && clonenode != NULL) {
            originalnode->next = clonenode->next;
            originalnode = originalnode->next;

            if (originalnode)
                clonenode->next = originalnode->next;
            clonenode = clonenode->next;
        }

        return clonehead;
    }
};