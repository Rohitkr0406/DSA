#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    Node* n = new Node(data);
    n->next = head;
    head = n;
}

void insertattail(Node* &head, int data){
    if(head == NULL){
        head = new Node(data);
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new Node(data);
}

void reverse(Node* &head){
    if(head == NULL || head->next == NULL){
        return; 
    }

    Node* prev = NULL;
    Node* current = head;
    Node* next;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
} 

void recursivereverse(Node* &head, Node* curr, Node* prev){
    if(curr == NULL){
        head = prev;
        return;
    }
    recursivereverse(head, curr->next, curr);
    curr->next = prev;

}
void recersive(Node* &head){
    recursivereverse(head, head, NULL);
}

// Function to recursively reverse the linked list and return the new head
Node* recersivereverse2(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* newhead = recersivereverse2(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}//

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node *head = NULL;
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    display(head);
    reverse(head);
    display(head);
    recersive(head);
    display(head);
    display(recersivereverse2(head));


    return 0;
}