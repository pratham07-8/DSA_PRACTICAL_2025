//12. Queue Using Linked List
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node *front=NULL, *rear=NULL;

void enqueue(int x){
    Node* t = new Node;
    t->data = x;
    t->next = NULL;

    if(front == NULL){
        front = rear = t;
    } else {
        rear->next = t;
        rear = t;
    }
}

void dequeue(){
    if(front){
        Node* t = front;
        front = front->next;
        delete t;
    }
}

void display(){
    Node* p = front;
    while(p){
        cout << p->data << " ";
        p = p->next;
    }
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    display();
}

