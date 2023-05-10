#include<stdio.h>
char toLowerCase(char);
int main(int argc, char const *argv[])
{
    char c;
    printf("Enter the lowerCase character\n");
    scanf("%c", &c);
    printf("%c\n", toLowerCase(c));
    return 0;
}
char toLowerCase(char c){
    char ans;
    if(c >= 65 && c <= 90){
        c = c + 32;
        
    }
    return c;
}
