
#include<stdio.h>
// #include<conio.h>
void octalToHexadecimal(int);
void hexadecimalToOctal(int);
int main()
{
    
    int octal ;
    int hexaDecimal;
    // clrscr();
    printf("Enter the octal value\n");
    scanf("%o", &octal);


    printf("Enter the Hexadecimal value\n");
    scanf("%x", &hexaDecimal);
    // getch();
    return 0;
}
void octalToHexadecimal(int n){
    printf("The octal to Hexadecimal value is %x\n", n);

}
void hexadecimalToOctal(int n){
    printf("The Hexadecimal to octal value is %o\n", n);

}