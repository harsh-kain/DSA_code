#include<stdio.h>

void inputMatrix(int[3][3], int , int);
void outputMatrix(int[3][3], int , int);
void sumOfMatrix(int[3][3] , int[3][3], int [3][3], int, int);
void subOfMatrix(int[3][3] , int[3][3], int [3][3], int, int);
void diagonalSumMatrix(int[3][3], int , int);
int main()
{
    int arr[3][4];
    int arr2[3][4];
    int sum[3][4];
    int sub[3][4];
    int i , j;
    printf("Enter the size of i\n");
    scanf("%d", &i);
    printf("Enter the size of j\n");
    scanf("%d", &j);
    
    inputMatrix(arr,i,j);
    // inputMatrix(arr2,i,j);
    // sumOfMatrix(arr, arr2,sum, i,j);
    // subOfMatrix(arr, arr2,sub, i,j);
    // outputMatrix(sum,i,j);
    // outputMatrix(sub, i,j);
    diagonalSumMatrix(arr, i , j);

    return 0;
}

void inputMatrix(int arr[3][3],  int r, int c){
    for(int i = 0; i<r; i++){
        for(int j = 0;  j<c; j++){
            printf("Enter the element of (%d, %d)\n", i, j);
            scanf("%d" , &arr[i][j]);
        }
    }
}
void outputMatrix(int arr[3][3], int r, int c){
    for(int i = 0; i<r; i++){
        for(int j = 0;  j<c; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void sumOfMatrix(int arr[3][3],int arr2[3][3], int res[3][3], int r, int c){
    for(int i = 0; i<r; i++){
        for ( int j = 0; j < c; j++)
        {
            res[i][j] = arr[i][j]+arr2[i][j];
        }  
    }
}
void subOfMatrix(int arr[3][3],int arr2[3][3], int res[3][3], int r, int c){
    for(int i = 0; i<r; i++){
        for ( int j = 0; j < c; j++)
        {
            res[i][j] = arr[i][j] - arr2[i][j];
        }
    }
}
void diagonalSumMatrix(int arr[3][3], int r, int c)
{   int leftSum = 0;
   int rightSum = 0;
    for(int i = 0; i<r; i++){
        for ( int j = 0; j < c; j++)
        {
           if((i == j)){
                leftSum += arr[i][j];
           }
           if((i+j) == c-1){
            rightSum += arr[i][j];
           }
        }
    }
    printf("Leftsum is %d\n", leftSum);
    printf("Rightsum is %d\n", rightSum);
}