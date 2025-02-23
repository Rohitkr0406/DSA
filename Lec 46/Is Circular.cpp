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

void insertnode(Node* &head, int data){
    Node* newnode = new Node(data);
    if(head == NULL){
        head = newnode;
        head->next = head;
        return;
    }
    Node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
}

void deletenode(Node* &head, int pos){
    if(head == NULL){
        return;
    }
    if(head->next == head){
        delete head;
        head = NULL;
        return;
    }   
    Node* temp = head;
    if(pos == 1){
        while(temp->next != head){
            temp = temp->next;
        }
        Node* todelete = head;
        head = head->next;
        temp->next = head;
        delete todelete;
        return;
    }
    int count = 1;
    while(count != pos-1){
        temp = temp->next;
        count++;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void printlist(Node* head){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);
}

bool checkcircular(Node* head){
    if(head == NULL){
        return false;
    }
    Node* temp = head;
    while(temp->next != head && temp->next != NULL){
        temp = temp->next;
    }
    if(temp->next == head){
        return true;
    }
    return false;
}

// Main function to test the circular linked list implementation
int main(){
    Node* head = NULL;
    insertnode(head, 1);
    insertnode(head, 2);
    insertnode(head, 3);
    insertnode(head, 4);
    insertnode(head, 5);
    printlist(head);
    cout<<endl;
    bool iscircular = checkcircular(head);
    cout<<"Linked List is circular: "<<(iscircular ? "Yes" : "No")<<endl;
    deletenode(head, 1);
    printlist(head);
    return 0;
}