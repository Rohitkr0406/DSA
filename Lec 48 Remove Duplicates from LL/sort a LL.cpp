#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertnode(Node* &head,int data){
    Node* n = new Node(data);
    if(head == NULL){
        head=n;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* findmiddle(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node* mergelist(Node* left,Node* right){
    if(!left) return right;
    if(!right) return left;

    if(left->data <= right->data){
        left->next=mergelist(left->next,right);
        return left;
    }
    else{
        right->next=mergelist(left,right->next);
        return right;
    }
}

Node* mergesort(Node* head){
    if(!head || !head->next) return head;

    Node* middle = findmiddle(head);
    Node* left = head;
    Node* right = middle->next;
    middle->next=NULL;

    left=mergesort(left);
    right=mergesort(right);

    Node* result = mergelist(left,right);
    return result;
}

Node* removeDuplicates(Node* head) {
    Node* current = head;
    while (current != NULL && current->next != NULL) {
        if (current->data == current->next->data) {
            Node* nextNext = current->next->next;
            delete current->next;
            current->next = nextNext;
        } else {
            current = current->next;
        }
    }
    return head;
}

int main(){
    Node* head = NULL;
    cout<<"Enter the size of the linked list: ";
    int n;
    cin>>n;
    cout<<"Enter the elements of the linked list: ";
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        insertnode(head,data);
    }
    cout<<endl;

    cout<<"The linked list is: ";
    print(head);
    cout<<endl;

    cout<<"The sorted linked list is: ";
    Node* sorted = mergesort(head);
    print(sorted);
    cout<<endl;

    cout<<"The linked list with duplicates removed is: ";
    removeDuplicates(sorted);

    print(sorted);
}

    