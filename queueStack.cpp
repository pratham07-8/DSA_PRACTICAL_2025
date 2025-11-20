//13. Queue Using Two Stacks
#include <iostream>
using namespace std;

int s1[100], s2[100], top1=-1, top2=-1;

void push1(int x){ s1[++top1] = x; }
void push2(int x){ s2[++top2] = x; }

int pop1(){ return s1[top1--]; }
int pop2(){ return s2[top2--]; }

void enqueue(int x){
    push1(x);
}

int dequeue(){
    if(top2 == -1){
        while(top1 != -1)
            push2(pop1());
    }
    return pop2();
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    cout << dequeue();
}
