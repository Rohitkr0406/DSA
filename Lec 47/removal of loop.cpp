#include<iostream>
#include <unordered_map>
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
        head->next = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;
}

void printcircular(Node* head){
    Node* temp = head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<temp->data<<" ";
} 

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


Node* removeloop(Node* head){
    if(!head || !head->next) return head;

    unordered_map<Node*, bool> visited;
    Node* temp = head;
    bool cycle = false;
    while(temp->next!=head){
        if(visited[temp] == true){
            cycle = true;
            break;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    if(cycle){
        temp->next = NULL;
    }
    return head;
}

Node* floydremoveloop(Node* &head)
{
    if(!head || !head->next){
        return head;
    }

    Node* slow;
    Node* fast;
    slow = fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow){
            slow = head;
            break;
        }
    }

    if(slow!=head){
        cout<<"No loop detected"<<endl;
        return NULL;
    }
    
    if (slow == fast) { 
        while (fast->next != slow) {
            fast = fast->next;
        }
    } else {
        while (slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    cout<<"Loop detected at "<<slow->data<<endl;

    fast->next = NULL;
    cout<<"Loop removed"<<endl;
    return head;
}

int main(){
    Node* head = NULL;
    insertnode(head, 1);
    insertnode(head, 2);
    insertnode(head, 3);
    insertnode(head, 4);
    insertnode(head, 5);
    insertnode(head, 6);
    print(head);
    cout<<endl;

    head->next->next->next->next->next->next = head->next->next;
    Node* ans = floydremoveloop(head);
    print(ans);
    return 0;
}