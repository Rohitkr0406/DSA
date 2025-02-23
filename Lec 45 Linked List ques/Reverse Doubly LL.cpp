#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

void insertattail(Node* &head, int data){
    Node* n = new Node(data);
    if(head == NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

Node *reverse(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* rest = reverse(head->next);

    head->next->next = head;
    head->prev = head->next;
    head->next = NULL;

    return rest;
}


void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    insertattail(head, 5);
    display(head);
    display(reverse(head));
    return 0;
}