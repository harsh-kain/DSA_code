#include<stdio.h>

struct employe
{
    int age;
    int salary;
    struct dob
    {
        int date;
    };
    
};

int main(int argc, char const *argv[])
{
    int arr[5] = {5,4,3,2,1};
    sort(arr,5);
    return 0;
}
void sort(int arr[] , int n){
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
}
