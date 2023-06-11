#include<iostream>
#include<vector>
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
    // Node * temp;
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
bool isPalindrome(Node * head) {
    vector<int> arr;
    Node * temp = head;
    while (temp != NULL)
    {
        arr.push_back(temp -> data);
        temp = temp -> next;
    }
    int s = 0; 
    int e = arr.size() - 1;
    while(s <= e){
        if(arr[s] != arr[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }   
    return true;
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;
    insertAtBeginning(&head , &tail, 1);
    insertAtBeginning(&head , &tail, 2);
    insertAtBeginning(&head , &tail, 2);
    insertAtBeginning(&head , &tail, 2);
    insertAtBeginning(&head , &tail, 2);
    insertAtBeginning(&head , &tail, 1);
    
    // traverse(&head);

    cout<<isPalindrome(head)<<endl;

    return 0;
}