#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    
};
void insertAtBeg(struct node ** start, int item){
   
    
    struct node * temp; 
    temp = (struct node *) malloc(sizeof(struct node));
    temp -> data = item;
    temp -> next = NULL;
    if(*start == NULL){
        *start = temp;
    }
    else{
        temp -> next = *start;
        *start = temp;
    }

}
void insertAtEnd(struct node ** start, int item){
    struct node * temp, * loc;
    temp = (struct node *) malloc (sizeof(struct node));
    temp -> data = item;
    temp -> next = NULL;

    if(* start == NULL){
        *start = temp;
    }
    else{
        loc = * start;
        while (loc-> next != NULL)
        {
            loc = loc -> next;
        }
        loc -> next = temp;
        
    }
}
void deleteBegninng(struct node ** start){
    struct node * temp;
    temp = *start;

    *start  = (*start) -> next;
    free(temp);
}
void delete_at_end(struct node ** start){
    struct node * temp, *loc;
    loc = *start;
    if((*start) -> next == NULL){
        temp = *start;
        *start = NULL;
    }
    else{
        while ((loc -> next) ->next != NULL )
        {
            loc = loc -> next;
        }
        temp = loc -> next;
        loc -> next = NULL;
        
    }
    free(temp);
}

void linkedListTraverse(struct node *start){
    while (start != NULL)
    {
        printf("%d " , start -> data);
        start = start -> next;
    }
    printf("\n");
    
}
int search(struct node *start, int item){
    struct node *temp = start;
    int i = 0;

    while (temp != NULL)
    {

        if(temp -> data == item){
            return 1;
        }
        temp = temp -> next;
    }
    return 0;

}
void insertAfter(struct node *start , int item, int value){
    struct node *temp, *loc;
    temp = (struct node *) malloc (sizeof(struct node));
    temp -> data = value;
    temp -> next = NULL;
    *loc = *start;
    while (loc != NULL)
    {
        if(loc -> data == item){
            temp -> next = loc -> next;
            loc -> next = temp;
        }
        loc = loc -> next;

    }
    
}
int main()
{
    struct node *head = NULL;
    printf("Enter choice \n");
    int input, location, ele, searchEle;

    while (1){
        printf("1 -> Insert Element  \n");
        printf("2 -> Insert Element At End  \n");
        printf("3 -> Search element\n");
        printf("4 -> Traverse linkedList \n");
        printf("5 -> Insert after element \n");
        printf("6 -> Delete element at end \n");
        printf("7 -> Delete element Form beginning \n");

        int n;
        scanf("%d", &n);

            switch (n)
            {
            case 1:
                printf("Enter how many element you want to insert in LL\n");
                scanf("%d", &ele);
                printf("Enter element for insert in beginning\n");
                for (int i = 0; i < ele; i++)
                {     
                    scanf("%d", &input);
                    insertAtBeg(&head, input);
                }
                break;
            
            case 2:
                printf("Enter element for insert in end\n");
                scanf("%d", &input);
                insertAtEnd(&head, input);
                break;
            
            case 3:
                printf("Enter element what you want to search\n");
                scanf("%d", &searchEle);

                int * ptr;
                ptr = search(head, searchEle);
                printf("%d\n", ptr);
                break;

            case 4:
                
                linkedListTraverse(head); 
                break;

            case 5:
                printf("Enter position where you want to add element\n");
                scanf("%d", &location);

                printf("Enter element what you insert at end\n");
                scanf("%d", &input);
                insertAfter(head, location ,input);
                break;
            case 6:
                delete_at_end(&head);
                break;
            case 7:
                deleteBegninng(&head);
                break;
            case 8:
                exit(1);
            default:
                break;
            }
    }

    return 0;
}
