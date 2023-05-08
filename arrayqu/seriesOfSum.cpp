#include<iostream>
using namespace std;
long long seriesSum(int n) {
	    long int ans = 0;
	    
	    if(n == 1){
	        return 1;
	    }
	    else {
	        // for(int i = 1; i<=n; i++){
	            
	        //     ans = ans + i;
	        // }
            ans = n * (n+1)/2;
            return ans;
	    }
}
int main()
{

    cout<<seriesSum(5)<<endl;
    return 0;
}
