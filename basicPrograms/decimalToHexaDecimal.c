
#include<stdio.h>
// #include<conio.h>
void decimalToHexaDecimal(int);
void hexaDecimalToDecimal(int);
int main(int argc, char const *argv[])
{
    
    int dec ;
    int hexaDecimal;
    // clrscr();
    printf("Enter the decimal value\n");
    scanf("%d", &dec);
    decimalTOHexaDecimal(dec);

    printf("Enter the Hexadecimal value\n");
    scanf("%x", &hexaDecimal);
    hexaDecimalToDecimal(hexaDecimal);
    // getch();
    return 0;
}
void decimalTOHexaDecimal(int n){
    printf("The Decimal to Hexadecimal value is %x\n", n);

}
void hexaDecimalToDecimal(int n){
    printf("The Hexadecimal to decimal value is %d\n", n);
}