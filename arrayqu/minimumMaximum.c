#include<stdio.h>
void inputArr(int[], int);
void outputArr(int[], int);
void minimum(int[], int);
void maximum(int[], int);
void sum(int[], int);
int main()
{
    int arr[10];
    int size,choice;
    printf("Enter the size \n");
    scanf("%d" , &size);
    printf("Enter Your choice 1 - minimum\n2 - maximum\n3 - sum\n");
    scanf("%d" , &choice);
    inputArr(arr,size);
    switch (choice)
    {
    case 1:
        minimum(arr,size);
        break;
    
    case 2:
        maximum(arr, size);
        break;
    
    case 3:
        sum(arr, size);
        break;

    default:
        printf("Enter a valid data\n");
        break;
    }
    return 0;
}
void inputArr(int arr[] , int size){
    for(int i = 0; i<size; i++){
        printf("Enter the element of %d --> ", i+1);
        scanf("%d", &arr[i]);
    }
}
void outputArr(int arr[] , int size){
    printf("Your array element are \n");
    for(int i = 0; i<size; i++){
        printf("%d", arr[i]);
    }
}

void minimum(int arr[] , int size){
    int min = arr[0];
    int count = 0;
    for(int i = 1; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
            count = arr[i];
        }
    }
    printf("The minimum no is %d\n", min);
    printf("The minimum index no is %d\n", count);;
}
void maximum(int arr[] , int size){
    int max = arr[0];
    int count = 0;
    for(int i = 1; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
            count = arr[i];
        }
    }
    printf("The minimum no is %d\n", max);
    printf("The minimum index no is %d\n", count);;
}
void sum(int arr[] , int size){
    int sum  = 0;
    for(int i = 1; i<size; i++){
        sum += arr[i];
    }
    printf("Your sum is %d\n", sum);
}