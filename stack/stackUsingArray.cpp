#include<iostream>
using namespace std;

int stack[50], top = -1, n;
void push(int value){
    if((top+1) == n){
        cout<<"stack is overFlow\n";
    }
    else{
        top  = top + 1;
        stack[top] = value;
    }
}
void pop(){
    if(top == -1){
        cout<<"stack is UnderFlow";
    }
    else{
        top = top - 1;
    }
}
void peek(){
    if(top == -1){
        cout<<"stack is empty"<<endl;
    }
    else{
        for(int i = top; i >= 0; i--){
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{   
    cout<<"enter size of stack"<<endl;
    cin>>n;

    push(4);
    push(5);
    push(6);
    push(7);
    peek();
    pop();
    pop();
    pop();
    peek();
    return 0;
}