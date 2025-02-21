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

int get_mid_element(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    if(count%2 == 0){
        count = count/2;
    }else{
        count = count/2 + 1;
    }
    temp = head;
    while(count > 1){
        temp = temp->next;
        count--;
    }
    return temp->data;
}

int get_mid_element2(Node* &head){
    if(head == NULL){
        return -1;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

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
    insertattail(head, 78);
    insertattail(head, 4);
    insertattail(head, 5);
    display(head);
    cout<<"Middle element of LL (approach 1): "<<get_mid_element(head)<<endl;
    cout<<"Middle element of LL (approach 2): "<<get_mid_element2(head)<<endl;
    return 0;
}