#include<iostream>
using namespace std;
char stack[10];
int top = -1, size = 0;
void push(char value){
    if(top == size){
        cout<<"stack is full"<<endl;
    }
    else{
        top++;
        stack[top] = value;
    }
}
void pop(){
    if(top == -1){
        cout<<"UnderFlow"<<endl;
    }
    else{
        top--;
    }
}
void peek(){
    cout<<stack[top]<<"";
}
bool isEmpty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    string str = "kain";
    cout<<"enter the size of stack"<<endl;
    cin>>size;
    if(str.length() > size){
        cout<<"string is too long"<<endl;
    }
    else{
        for(int i = 0; i<str.length(); i++){
            push(str[i]);
        }
    }

    
    while(!isEmpty()){
        peek();
        pop();
    }
    return 0;
}

