#include<iostream>
#include<vector>
using namespace std;
// int maximumWealth(vector<vector<int>>& accounts) {
    
// }
int maximum(int arr[][3]){
    int ans =0;
    int temp;
    for(int i =0; i<3; i++){
        temp = 0;
        for(int j =0; j<3;j++){
            temp += arr[i][j];
        }
        if(temp > ans){
            ans = temp;
            cout<<ans<<" ";
        }
    }
    return ans;
}
int main()
{
    int arr[][3] = {{1,5},{7,3},{3,5}};
    cout<<maximum(arr)<<endl;
    return 0;
}