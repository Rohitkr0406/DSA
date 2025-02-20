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

    ~Node(){
        cout<<"Deleting Node with data"<<endl;
    }
};

void insertnode(Node* &tail, int data){
    Node* n = new Node(data);
    if(tail == NULL){
        n->next = n;
        tail = n;
        return;
    }
    n->next = tail->next;
    tail->next = n;
    tail = n;
}

void insertatpos(Node* &tail, int data, int pos){
    Node* n = new Node(data);
    if(tail == NULL){
        n->next = n;
        tail = n;
        return;
    }
    if(pos == 1){
        n->next = tail->next;
        tail->next = n;
        return;
    }
    Node* temp = tail->next;
    int count = 1;
    while(temp!=tail && count!=pos-1){
        temp = temp->next;
        count++;
    }
    if(temp == tail){
        cout<<"Position out of bounds"<<endl;
        return;
    }
    n->next = temp->next;
    temp->next = n;
    if(temp == tail){
        tail = n;
    }
}

void deletenode(Node* &tail, int data){
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }

    Node* prev = tail;
    Node* curr = tail->next;

    if(tail->next == tail && tail->data == data){
        delete tail;
        tail = NULL;
        return;
    }

    if(curr->data == data){
        prev->next = curr->next;
        delete curr;
        return;
    }

    while(curr!=tail && curr->data!=data){
        prev = curr;
        curr = curr->next;
    }
    if(curr == tail && curr->data!=data){
        cout<<"Element not found"<<endl;
        return;
    }
    prev->next = curr->next;
    curr->next = NULL;
    tail = prev;


    delete curr;
}



void display(Node* &tail){
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp = tail->next;
    while(temp!=tail){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<tail->data<<endl;

}

int main(){
    Node* tail = NULL;
    insertnode(tail, 1);
    insertnode(tail, 2);
    insertnode(tail, 3);
    insertnode(tail, 4);
    display(tail);
    deletenode(tail,1);
    display(tail);
    return 0;
}

