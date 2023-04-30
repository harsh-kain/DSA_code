#include<iostream>
#include<vector>
using namespace std;
int lastOccurance(vector<int> arr, int target){
    int start = 0;
    int end = arr.size();
    int mid = (start + end ) / 2;
    int ans = -1;
    while(start <= end){
        if(arr[mid] == target){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else if (arr[mid] < target){
            start = mid + 1;
        }
        mid = (start + end) / 2;

    }
    return ans;
}
int main()
{
    vector<int> arr = {1,2,3,4,5,5,5,5,5,5,5,5,5,5,7,8,9,10}; 
    int target = 5;
    cout<<lastOccurance(arr, target)<<endl;
    vector<int> salary = {4000,3000,1000,2000};
    int len = salary.size();
    double s = salary[1];
    double e = salary[len-2];

    cout<<s<<" "<<e;
    return 0;
}