#include<stdio.h>
void merge(int arr[], int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1+1] , R[n2+1]; 
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[p + i ];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[q + j+1];
    }
    L[n1] = 9999;
    R[n2] = 9999;

    int i, j, k;

    i = 0;
    j = 0;
    
    for (int k = p; k <= r; k++)
    {
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i = i + 1;
        }        
        else{
            arr[k] = R[j];
            j = j + 1;
        }
    }

    // for (int i = 0; i < 10; i++){
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
}
void mergeSort(int arr[], int l, int r) {
  if (l < r) {

    int m = (l + r )/ 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
  }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1};  
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size - 1);
    printArray(arr,size);
    return 0;
}
