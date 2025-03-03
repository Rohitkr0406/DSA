#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertnode(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* removedup(node* &head){
    if(head==NULL){
        return NULL;
    }

    node* temp=head;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            node* todelete=temp->next;
            temp->next=temp->next->next;
            delete todelete;
        }
        else{
            temp=temp->next;
        }
    }
    return head;
}

int main(){
    node* head=NULL;
    insertnode(head,1);
    insertnode(head,2);
    insertnode(head,2);
    insertnode(head,3);
    insertnode(head,3);
    insertnode(head,3);
    insertnode(head,4);
    display(head);
    removedup(head);
    display(head);
    return 0;
}