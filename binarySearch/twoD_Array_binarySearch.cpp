#include<iostream>
using namespace std;
bool binarySearch(int arr[][3] , int row , int col, int target){
    int s = 0;
    int e = ( row * col ) - 1;
    int mid = s + ( e - s ) /2;
    while (s<=e)
    {
        int rowIndex = mid / col;
        int colIndex = mid % col;
        cout<<rowIndex<<" "<<colIndex<<" "<<endl;

        if(arr[rowIndex][colIndex] == target){
            return true;
        }
        if(arr[rowIndex][colIndex] < target){
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + ( e - s ) / 2;
    }
    return false;
    
}

int main()
{
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    binarySearch(arr, 3, 3, 9);
    return 0;
}