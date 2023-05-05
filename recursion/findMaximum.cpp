#include<iostream>
#include<limits>
using namespace std;
int findMax(int arr[], int n, int i , int &max){
    
    if(i >= n){
        return -1;
    } 

    if(arr[i] > max){
        max = arr[i];
    }
    return findMax(arr , n , i+1, max);
}
int main()
{   
    int arr[] = {51,20,30,40,50};
    int n = 5;
    int i = 0;
    int max = INT8_MIN;
    findMax(arr, n, i , max);
    cout<<max<<endl;
    return 0;
}