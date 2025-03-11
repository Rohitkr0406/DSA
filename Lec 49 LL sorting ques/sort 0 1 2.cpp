#include<iostream>
using namespace std;

class sort{
    public:
    //Approach 1: data replacement method
    Node* sort012ap1(Node *head){
        int count[3]={0,0,0};
        Node* temp=head;
        while(temp!=NULL){
            count[temp->data]++;
            temp=temp->next;
        }
        int i=0;
        temp=head;
        while(temp!=NULL){
            if(count[i]==0){
                i++;
            }
            else{
                temp->data=i;
                count[i]--;
                temp=temp->next;
            }
        }
        return head;
    }

    void insertattail(Node* &head, Node* &tail, Node* curr){
        tail->next=curr;
        tail=curr;
    }

    //Approach 2: changing links
    Node* sort012ap2(Node *head){
        if(head==NULL){
            return head;
        }
        Node* zerohead= new Node(-1);
        Node* zerotail=zerohead;
        Node* onehead= new Node(-1);
        Node* onetail=onehead;
        Node* twohead= new Node(-1);
        Node* twotail=twohead;

        Node* curr=head;
        while(curr!=NULL){
            int val=curr->data;
            if(val==0){
                insertattail(zerohead,zerotail,curr);
            }
            else if(val==1){
                insertattail(onehead,onetail,curr);
            }
            else if(val==2){
                insertattail(twohead,twotail,curr);
            }
            curr=curr->next;
        }
        if(onehead->next!=NULL){
            zerotail->next=onehead->next;
        }
        else{
            zerotail->next=twohead->next;
        }
        onetail->next=twohead->next;
        twotail->next=NULL;
        head=zerohead->next;
        delete zerohead;
        delete onehead;
        delete twohead;
        return head;
    }
}

