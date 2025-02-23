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

void insertnode(Node* &head, int data)
{
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

Node* kpairreverse(Node* &head,int k){
    if(head==NULL)
        return NULL;

    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    int cnt = 0;
    while(curr!=NULL && cnt<k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }
    if(next!=NULL){
        head->next = kpairreverse(next,k);
    }
    return prev;
}

void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main(){
    int s;
    Node* head = NULL;
    cout<<"Enter the size of linked list: ";
    cin>>s;
    cout<<endl;
    cout<<"Enter the elements of linked list: ";
    for(int i=1; i<=s; i++)
    {
        int data;
        cin>> data;
        insertnode(head, data);
    }
    display(head);
    cout<<endl;

    int k;
    cout<<"Enter the pair in which you wanna reverse: ";
    cin>>k;;
    head = kpairreverse(head,k);
    cout<<endl;
    display(head);
    return 0;
}