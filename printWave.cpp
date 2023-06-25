#include<iostream>
#include<vector>
using namespace std;
vector <int> printWave(vector<vector<int>> arr, int row, int col){
    vector<int> ans;
    for (int i = 0; i < col; i++)
    {
        if(i & 1){
            for ( int j = row - 1; j >= 0; j--)
            {
                cout<<arr[j][i]<<" ";
                ans.push_back(arr[j][i]);
            }
            cout<<endl;
            
           
        }
        else{
            for (int j = 0; j < row; j++)
            {
                cout<<arr[j][i]<<" ";
                ans.push_back(arr[j][i]);
            }
            cout<<endl;
            
        }
    }
    
    return ans;
}
int main()
{
    vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    printWave(arr, 3,4);
    return 0;
}