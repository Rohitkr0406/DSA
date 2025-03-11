#include<iostream>
#include<stack>

using namespace std;

int main(){
    //stack initialization
    stack<int> s;

    //insert elements in stack
    stack.push(8);
    stack.push(9);
    stack.push(1);
    stack.push(4);
    stack.push(7);

    //stack size
    cout<<"size of stack is "<<s.size()<<endl;

    //stack top
    cout<<"top element of stack is "<<s.top()<<endl;

    //pop element from stack
    s.pop();
    cout<<"top element of stack is "<<s.top()<<endl;

    //check stack is empty or not
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    //swapping two stacks
    stack<int> s2;
    s2.push(10);
    s2.push(11);
    s2.push(12);
    s2.push(13);
    s2.push(14);

    cout<<"size of stack s is "<<s.size()<<endl;
    cout<<"size of stack s2 is "<<s2.size()<<endl;

    s.swap(s2);

    cout<<"size of stack s is "<<s.size()<<endl;
    cout<<"size of stack s2 is "<<s2.size()<<endl;

}