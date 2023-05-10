#include<stdio.h>
// #include<conio.h>
void decimalToOctal(int);
void octalToDecimal(int);
void main()
{
    int dec ;
    int octal;
    // clrscr();
    printf("Enter the decimal value\n");
    scanf("%d", &dec);

    
    printf("Enter the Octal value\n");
    scanf("%o", &octal);

    decimalToOctal(dec);
    octalToDecimal(octal);
    // getch();
}

void decimalToOctal(int n){
    printf("The Decimal to octal value is %o\n", n);

}
void octalToDecimal(int n){
    printf("The Octal to decimal value is %d\n", n);

}
// decimal = 0 - 9 %d
// octal = 0 - 7 - %o 
// hexa = 0 - 15 - %x