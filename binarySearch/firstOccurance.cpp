#include<iostream>
#include<vector>
using namespace std;
int findOccurance(vector<int> arr, int target){

    int start = 0;
    int end = arr.size();
    int ans = -1;
    int mid = (start + end)/2;
    while(start<=end){
        if(arr[mid] == target){
            ans = mid;
            end = mid - 1; 
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
         mid = (start + end)/2;
    }
    return ans ;
}
int main()
{

    int target = 4;
    vector<int > arr = {1,2,3,3,3,3,3,3,3,3,4,4,4,4,4,6,7,8};
    cout<<findOccurance(arr,target)<<endl;
    return 0;
}