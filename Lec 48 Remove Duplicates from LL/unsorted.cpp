#include <iostream>
#include <map>
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

void insertnode(Node* &head, int data){
    Node* n = new Node(data);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* removedup(Node* &head)
{
    if(!head) return head;

    map<int, bool> visited;
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL){
        if(visited[curr->data]){
            Node* todelete = curr;
            prev->next=curr->next;
            curr=curr->next;
            delete todelete;
        }
        else{
            visited[curr->data]=true;
            prev=curr;
            curr=curr->next;
        }
    }
    return head;
}

int main(){
    Node* head=NULL;
    int n;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    for(int i=0; i<n; i++){
        int data;
        cout<<"Enter the data: ";
        cin>>data;
        insertnode(head, data);
    }
    print(head);
    return 0;
}