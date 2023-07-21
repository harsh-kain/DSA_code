#include<iostream>
using namespace std;
int stack[50], n, top1 = -1,top2 = n;
int main()
{
    return 0;
}
void push1(int value){
    if(top2 - top1 == 1){
        cout<<"stack is full"<<endl;
    }
    else{
        top1++;
        stack[top1] = value;
    }
}
void push2(int value){
    if(top2 - top1 == 1){
        cout<<"stack is full"<<endl;
    }
    else{
        top2--;
        stack[top2] = value;
    }
}
void pop1(){
    if(top1 == -1){
        cout<<"stack is underFlow"<<endl;
    }
    else{
        top1--;
    }
}
void pop2(){
    if(top2 == n){
        cout<<"stack is undeflow"<<endl;
    }
    else{
        top2++;
    }
}