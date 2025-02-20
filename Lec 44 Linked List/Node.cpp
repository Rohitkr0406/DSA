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
        if(next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Deleting Node with data: "<<data<<endl;
    }

};

void insertathead(Node* &head, int data){
    if(head == NULL){
        head = new Node(data);
        return;
    }
    Node* n = new Node(data);
    n->next = head;
    head = n;
}

void insertattail(Node* &tail, int data){
    if(tail == NULL){
        insertathead(tail, data);
        return;
    }
    Node *n = new Node(data);
    tail->next = n;
    tail = n;
}

void insertatposition(Node* &tail, Node* &head, int data, int pos){
    Node* temp = head;
    if(pos == 1){
        insertathead(head, data);
    }

    else if(temp->next == NULL){
        insertattail(tail, data);
    }

    else{ 
        for(int i = 1; i < pos-1; i++){
            temp = temp->next;
        } 
        Node* n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }
}

void deletenode(Node* &head, Node* &tail, int pos){
    if (head == NULL) return;// List is empty

    Node* temp = head;
    if(pos == 1){
        head = temp->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    for(int i = 1; i < pos-1; i++){
        if (temp->next == NULL){
            break;
        }
        temp = temp->next;
    }
    if (temp->next == NULL){
        cout << "Position is out of bounds" << endl;
        return;
    }

    Node* todelete = temp->next;
    temp->next = todelete->next;
    if (todelete->next == NULL) {
        tail = temp;
    }
    todelete->next = NULL;
    delete todelete;
}
        

void display(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    Node* head = new Node((1));
    Node* tail = head;
    insertattail(tail, 2);
    insertattail(tail, 4);
    insertattail(tail, 5);
    insertattail(tail, 6);
    insertatposition(tail, head, 3, 3);
    display(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    deletenode(head, tail, 6);
    display(head);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;


    return 0;
}

