#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;
    int size;
    LinkedList(){
        head = NULL;
        size = 0;
    }

    void insert(int data){
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            newNode->next = head;  
            size++;
            return;
        }

        Node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;  
        size++;
    }   

    void print(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while(temp != head);
        cout << endl;
    }
};

    
