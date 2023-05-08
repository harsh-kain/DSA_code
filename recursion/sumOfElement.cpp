#include<iostream>
#include<limits>
using namespace std;
int sumOfArray(int arr[], int n, int i){
    
    int sum = 0;
    if(i>=n){
        return -1;
    }
    sum = sum +  arr[i];
    cout<<sum<<" ";
    sumOfArray(arr , n, i+1);
    // return sum;
}
int main()
{   
    int arr[] = {51,20,30,40,50};
    int n = 5;
    int i = 0;
    cout<<sumOfArray(arr , n, i)<<endl;

    return 0;
}