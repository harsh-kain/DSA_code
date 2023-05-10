#include<stdio.h>
int power(int , int);
int main(int argc, char const *argv[])
{
    int num,p;
    printf("Enter a number and power\n");
    scanf("%d", &num);
    scanf("%d" , &p);
    printf("The ans is %d\n", power(num,p));
    return 0;
}
int power(int x, int y){
    int i,ans;
    for( i = 0; i<y; i++){
        ans = x * x;
    }
    return ans;
}
