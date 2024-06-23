#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;

    node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class stack{
    node * pointer;
    public:

    void push(int data){
        if(pointer==NULL){
            node * temp = new node(data);
            pointer = temp;
        }
        node * temp = new node(data);
        temp->next = pointer;
        pointer = temp;
    }
    
    void pop(){
        if(pointer==NULL){
            cout<<"The stack is empty"<<endl;
        }
        node * temp = pointer;
        pointer = pointer->next;
        delete temp;
    }

    void print(){
        node * temp = pointer;
        while(temp!= NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    
};
int main(){
    stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    s.print();
    
    return 0;
}