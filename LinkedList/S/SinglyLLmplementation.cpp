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

void insertAtTail();
int main(){
    node * head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);

    while(!head){
        cout<<head->data<<" ";
        head = head->next;
    }
    return 0;
}