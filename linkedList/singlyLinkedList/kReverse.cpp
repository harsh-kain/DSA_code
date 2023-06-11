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
    temp = newNode(data);
    
    temp = *head;
}
Node * kReverse( Node ** head, int k){
    Node * next = NULL;
    Node * prev = NULL;
    Node * curr = *head;
    Node * temp = *head;
    int count = 0;



    while (count < k && curr != NULL)
    {
        next = curr -> next;
        curr -> next = prev ;
        prev = curr;
        curr = next;
        count++;
    }
    if(curr != NULL){
        
        (*head) -> next = kReverse(&next, k);
    }
    return prev;
    

}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    insertAtBeginning(&head , &tail, 5);
    insertAtBeginning(&head , &tail, 6);
    insertAtBeginning(&head , &tail, 3);
    insertAtBeginning(&head , &tail, 4);
    insertAtBeginning(&head , &tail, 1);
    insertAtBeginning(&head , &tail, 2);
    
    traverse(&head);
    cout<<"after k reverse"<<endl;
    Node * reverse = kReverse(&head , 2);
    traverse(&reverse);
    return 0;
}