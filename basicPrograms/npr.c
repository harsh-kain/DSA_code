#include<stdio.h>
long factorial(long);
long findNpr(int , int);
int main(int argc, char const *argv[])
{
    int n; 
    int r;
    long int ncr;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the value of r\n");
    scanf("%d", &r);

    printf("The ncr is %ld\n",findNpr(n,r));
    return 0;
}
long findNpr(int n, int r){
    long ans;
    ans  = factorial(n)/(factorial(n-r));
    return ans;
}
long factorial(long k){
    int fact = 1,i;
    for ( i = 1; i <=k; i++)
        fact *= i;
    
    return fact;
    
} 