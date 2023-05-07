#include<iostream>
#include<limits>
using namespace std;
int findMin(int arr[], int n, int i , int &min){
    
    if(i >= n){
        return -1;
    } 

    if(arr[i] < min){
        min = arr[i];
    }
    return findMin(arr , n , i+1, min);
}
int main()
{   
    int arr[] = {51,20,30,40,50};
    int n = 5;
    int i = 0;
    int min = INT8_MAX;
    findMin(arr, n, i , min);
    cout<<min<<endl;
    return 0;
}