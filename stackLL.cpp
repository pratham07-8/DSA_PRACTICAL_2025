//10. Stack Using Linked List
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* top=NULL;

void push(int x){
    Node* t=new Node;
    t->data=x;
    t->next=top;
    top=t;
}

void pop(){
    if(top){
        Node* t=top;
        top=top->next;
        delete t;
    }
}

void display(){
    Node* p=top;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main(){
    push(5);
    push(10);
    push(15);
    pop();
    display();
}

