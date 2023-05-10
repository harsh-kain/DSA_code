#include<iostream>
using namespace std;
int* sort(int arr[] , int n){
       int temp;
        int s = 0;
        int e = n-1;
        while(s<e){
            if(arr[s] > arr[e]){
                temp = arr[s];
                arr[s] arr[e];
                arr[e] = temp;
            }
            else{
                s++;
                e--;
            }
        }
        return arr;
   }
int main()
{
    return 0;
}