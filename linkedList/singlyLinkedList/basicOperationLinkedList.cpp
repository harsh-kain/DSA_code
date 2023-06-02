#include<iostream>
using namespace std;
struct Node {
   int data;
   Node* next;
};
struct Node* newNode(int data) {
   Node* node = new Node;
   node->data = data;
   node->next = NULL;
   return node;
}


void traverse(Node ** head){
    Node * temp = *head;
    while (temp != NULL)
    {
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }   
    cout<<endl;
}
void insertAtBeginning(Node ** head, Node ** tail, int data){

    if(*head == NULL){
        Node * temp = newNode(data);
        *head = temp;
        *tail = temp;
        return;
    }
    Node * temp = newNode(data);
    temp -> next = *head;
    *head = temp;
}
void insertAtTail(Node ** head, Node ** tail, int data){

    if(*head == NULL){
        Node * temp = newNode(data);
        *head = temp;
        *tail = temp;
        return;
    }
    Node * temp = newNode(data);
    (*tail) -> next = temp;
    *tail = temp;
}
void insertAtPosition(Node ** head, Node ** tail, int position, int data){
    if(*head == NULL){
        insertAtBeginning(&(*head), &(*tail), data);
        return;
    }
    Node * temp;
    Node *  prev;
    Node* curr;
    prev = *head;
    int i = 1;
    while (i < position)
    {
        prev = prev -> next;
        i++;
    }
    Node * temp = newNode(data);
    
    temp = *head;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    insertAtBeginning(&head , &tail, 2);
    insertAtBeginning(&head , &tail, 4);
    insertAtBeginning(&head , &tail, 6);
    insertAtBeginning(&head , &tail, 8);
    
    insertAtTail(&head, &tail, 10);
    traverse(&head);

    return 0;
}