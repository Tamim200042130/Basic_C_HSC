#include <stdio.h>
#include <conio.h>
int main()
{

    float a, b, c, avg;

    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);

    // scanf("%f %f %f", &a, &b, &c);

    avg = (a + b + c) / 3;

    printf("\n");
    printf("The average is= %0.100000000f\n", avg);

    getch();

    return 0;
}
