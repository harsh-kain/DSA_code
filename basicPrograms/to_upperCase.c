#include<stdio.h>
char toUpperCase(char);
int main(int argc, char const *argv[])
{
    char c;
    printf("Enter the lowerCase character\n");
    scanf("%c", &c);
    printf("%c\n", toUpperCase(c));
    return 0;
}
char toUpperCase(char c){
    char ans;
    if(c >= 97 && c <= 122){
        c = c - 32;
        
    }
    return c;
}
