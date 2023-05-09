#include <iostream>
using namespace std;

int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
	int i,j,k=1,n=1;
	// while(i <= 5){
	// 	while(j<=i){
    //         k=j;
	// 		cout<<k;
	// 		j++;
	// 		k++;
	// 	}
	// 	cout<<endl;
	// 	i++;
	// }
    for (i =1; i <=n; i++)
    {
        k=i;
        for (j = 1; j <= i; j++)
        {  
            cout<<k;
            k++;
        }
        
        cout<<endl;
        
    }
    
}