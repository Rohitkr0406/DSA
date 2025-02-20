#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }

    ~Node(){
        int val = data;
        cout<<"Deleting Node with data: "<<val<<endl;
    }

};

void insertathead(Node* &head, int value)
{
    if(head == NULL){
        head = new Node(value);
        return;
    }
    Node* n= new Node(value);
    n->next = head;
    head->prev = n;
    head = n;
}

void insertattail(Node* &head, int value)
{
   if(head == NULL){
       head = new Node(value);
       return;
   }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    Node* n = new Node(value);
    temp->next = n;
    n->prev = temp;
}

void insertatpos(Node* &head, int pos, int value)
{
    if(pos == 1){
        insertathead(head, value);
        return;
    }
    Node* temp = head;
    Node* n = new Node(value);
    int count = 1;
    while(temp!=NULL && count!=pos-1){
        temp = temp->next;
        count++;
    }
    if(temp == NULL){
        cout<<"Position out of bounds"<<endl;
        return;
    }

    n->next = temp->next;
    temp->next = n;
    n->prev = temp;
    if(n->next!=NULL){
        n->next->prev = n;
    }
}

void deletenode(Node* &head, int pos)
{
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    if(pos == 1){
        Node* todelete = head;
        head = head -> next;
        if(head!=NULL){
            head->prev = NULL;
        }
        delete todelete;
        return;
    }

    Node* temp = head;
    int count = 1;
    while(temp!=NULL && count!=pos){
        temp = temp->next;
        count++;
    }
    if(temp == NULL){
        cout<<"Position out of bounds"<<endl;
        return;
    }
    Node* todelete = temp;
    temp -> prev -> next = temp -> next;
    if(temp->next!=NULL){
        temp->next->prev = temp->prev;
    }
    delete todelete;
}


int getlength(Node* &head)
{
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    return count; 
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL; 
    insertathead(head, 5);
    insertathead(head, 2);
    insertattail(head, 15);
    insertattail(head, 20);
    insertatpos(head, 3, 10);
    print(head);
    cout<<getlength(head)<<endl;
    deletenode(head, 1);
    print(head);
    cout<<getlength(head)<<endl;

}