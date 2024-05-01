#include <stdio.h>
#include <conio.h>
int main()
{
    float fahrenheit, celsius;
    printf("Enter the temperature in Fahrenheit:");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("The temperature in Celsius is :  %.4f\n", celsius);
    getch();
}