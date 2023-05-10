#include<stdio.h>
void input(int [], int);
void output(int [], int);
void reverse(int [], int);
int main()
{
    int arr[10];
    int size;
    scanf("%d", &size);
    input(arr,size);
    output(arr,size);
    return 0;
}
void input(int arr[] , int size){
    for(int i = 0; i<size; i++){
        scanf("%d" , &arr[i]);
    }
}
void output(int arr[] , int size){
    for(int i = 0; i<12; i++){
        printf("%d " , arr[i]);
    }
}
