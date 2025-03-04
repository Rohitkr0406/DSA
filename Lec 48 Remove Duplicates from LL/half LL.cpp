#include <iostream>
#include "circularLL.cpp"

Node* findMiddle(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast->next != head && fast->next->next!= head) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

pair<Node*, Node*> splitlist(Node* head) {
    if (!head || head->next == head) {
        return {head, nullptr};
    }
    Node* mid = findMiddle(head);
    Node* left = head;
    Node* right = mid->next;
    mid->next = left;

    Node* temp = right;
    while (temp->next!= head) {
        temp = temp->next;
    }
    temp->next = right;
    return {left, right};
}

int main() {
    LinkedList l;
    int n;
    std::cout << "Enter the number of nodes for circular linked list: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int data;
        std::cout << "Enter the data for node " << i+1 << ": ";
        std::cin >> data;
        l.insert(data);
    }
    l.print();
    
    pair<Node*, Node*> p = splitlist(l.head);
    cout << "Left half: ";
    LinkedList li;
    li.head = p.first;
    li.print();
    cout << "Right half: ";
    li.head = p.second;
    li.print();

    return 0;
} 

    
