//14. Singly Linked List – Insert at Beginning, Middle, End
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = NULL;

void insertBeg(int x){
    Node* t = new Node;
    t->data = x;
    t->next = head;
    head = t;
}

void insertEnd(int x){
    Node* t = new Node;
    t->data = x;
    t->next = NULL;

    if(head == NULL){
        head = t;
        return;
    }
    Node* p = head;
    while(p->next) p = p->next;
    p->next = t;
}

void insertMid(int pos, int x){
    Node* t = new Node;
    t->data = x;

    Node* p = head;
    for(int i=0;i<pos-1;i++) p = p->next;

    t->next = p->next;
    p->next = t;
}

void display(){
    Node* p = head;
    while(p){
        cout << p->data << " ";
        p = p->next;
    }
}

int main(){
    insertBeg(10);
    insertEnd(20);
    insertMid(1, 15);
    display();
}

