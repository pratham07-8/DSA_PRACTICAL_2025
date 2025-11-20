//15. Delete Node by Value or Position
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int x){
    Node* t = new Node;
    t->data = x;
    t->next = head;
    head = t;
}

void deleteValue(int x){
    Node *p=head, *q=NULL;

    while(p && p->data != x){
        q = p;
        p = p->next;
    }
    if(!p) return;

    if(q == NULL) head = head->next;
    else q->next = p->next;

    delete p;
}

void deletePos(int pos){
    Node *p=head, *q=NULL;
    for(int i=0;i<pos;i++){
        q = p;
        p = p->next;
    }
    if(q == NULL) head = head->next;
    else q->next = p->next;
    delete p;
}

void display(){
    Node* p = head;
    while(p){
        cout << p->data << " ";
        p = p->next;
    }
}

int main(){
    insert(30);
    insert(20);
    insert(10);
    deleteValue(20);
    display();
}


