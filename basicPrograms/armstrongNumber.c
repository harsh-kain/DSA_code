#include<stdio.h>
#include<math.h>
int armStrong(int);
int main()
{
    int num;
    printf("Enter any Armstrong number \n");
    scanf("%d", &num);
    armStrong(num);
   
    return 0;
}

int armStrong(int n){
    int temp,sum=0,rem,count=0;
    temp = n;
    while (n>0)
    {
        rem = n%10;
        count++;
        n = n/10;
    }
    while (temp > 0)
    {
        rem = temp%10;
        sum = sum+pow(rem,count);
        temp = temp/10;
    }
    
    (sum == n) ? printf("Armstrong\n") : printf("Not Armstrong\n");
    
    
}
