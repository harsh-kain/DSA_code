#include<iostream>
using namespace std;
int highestRow(int arr[][3], int row, int col){
    int sum = 0;
    int temp = 0;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if(sum > temp){
            temp = sum;
        }
        
    }
    return temp;
    
}
int main()
{
    int arr[3][3] = {1,2,3,1,2,3,1,2,5};
    cout<<highestRow(arr, 3,3)<<endl;
    return 0;
}