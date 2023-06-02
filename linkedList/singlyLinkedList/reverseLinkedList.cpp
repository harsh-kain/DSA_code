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
Node * reverseLinkedList(Node ** head){
    if(*head == NULL || (*head) -> next == NULL){
        return *head;
    }
    Node * curr = *head; 
    Node * prev = NULL; 
    Node * forward = *head;
    while (curr != NULL)
    {
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
     
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    insertAtBeginning(&head , &tail, 5);
    insertAtBeginning(&head , &tail, 4);
    insertAtBeginning(&head , &tail, 3);
    insertAtBeginning(&head , &tail, 2);
    
    traverse(&head);
    
    Node * reverseLL = reverseLinkedList(&head);
    traverse(&reverseLL);
    return 0;
}