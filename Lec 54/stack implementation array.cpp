#include <iostream>
using namespace std;

class stack{
    int top;
    public:
    int s;
    int *a;


    stack(int s){
        this->s = s;
        a = new int[s];
        top = -1;
    }
    
    bool push(int x){
        if(top >= s-1){
            cout<<"stack overflow"<<endl;
            return false;
        }
        else{
            a[++top] = x;
            cout<<"pushed"<<x<<"to stack"<<endl;
            return true;
        }
    }

    int pop(){
        if(top < 0){
            cout<<"stack underflow"<<endl;
            return 0;
        }
        else{
            int x = a[top--];
            return x;
        }
    }

    int peek(){
        if(top < 0){
            cout<<"stack underflow"<<endl;
            return 0;
        }
        else{
            int x = a[top];
            return x;
        }
    }

    bool isEmpty(){
        return (top < 0);
    }

    int size(){
        return top+1;
    }

};

int main(){
    stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<"size of stack is "<<s.size()<<endl;
    cout<<s.pop()<<"popped from stack"<<endl;
    cout<<"top element is "<<s.peek()<<endl;
    cout<<"size of stack is "<<s.size()<<endl;
    s.push(60);
    s.push(70);
    return 0;
}

