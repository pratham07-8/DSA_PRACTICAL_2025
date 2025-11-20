//11. Queue Using Array
#include <iostream>
using namespace std;

int front = -1, rear = -1, q[100];

void enqueue(int x){
    if(front == -1) front = 0;
    q[++rear] = x;
}
void dequeue(){
    if(front <= rear) front++;
}
int peek(){
    return q[front];
}
void display(){
    for(int i = front; i <= rear; i++)
        cout << q[i] << " ";
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    dequeue();
    display();
}
