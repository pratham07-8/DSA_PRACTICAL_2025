//9. Stack Using Array
#include <iostream>
using namespace std;

int top=-1, st[100];

void push(int x){
    st[++top]=x;
}
void pop(){
    top--;
}
int peek(){
    return st[top];
}
void display(){
    for(int i=0;i<=top;i++) cout << st[i] << " ";
}

int main(){
    push(10);
    push(20);
    push(30);
    pop();
    display();
}
